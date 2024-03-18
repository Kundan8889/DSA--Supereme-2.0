#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid =(s+e)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int main(){
    int arr[]={21,25,34,45,56,67,89};
    int size=7;
    int target=67;
    int ansIndex=binarySearch(arr,size,target);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element at Index : "<<ansIndex<<endl;
    }

}