// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int findFirstOccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    //integer over flow hone ki shambhawna hain 
    //-->int mid=(s+e)/2;
    //ish case me integer over flow nhi hoaga
    int mid=s+(e-s)/2;
    while (s<=e)
    {
       if(arr[mid]==target){
        ans=mid;
        e=mid-1;
       }
       else if(arr[mid]<target){
        s=mid+1;
       }
       else if(arr[mid]>target){
        e=mid-1;
       }
     mid=s+(e-s)/2;
    }
    return ans; 
}
int main(){
    int arr[]={10,20,30,30,30,30,70,80,90};
    int n=9;
    int target=30;
    int ansIndex=findFirstOccurence(arr,n,target);
     if(ansIndex==-1){
        cout<<"Element not found"<<ansIndex<<endl;
    }
    else{
        cout<<"Element at Index : "<<ansIndex<<endl;
    }
}