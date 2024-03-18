//Peak Index in a Mountain Array
#include<iostream>
using namespace std;
int peakMountain(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
       if(arr[mid]<arr[mid+1]){
        s=mid+1;
       }
       else {
        e=mid;
       }
     mid=s+(e-s)/2;
    }
    return e; 
}

int main(){
    int arr[]={0,3,5, 4,2};
    int n=4;
   int ans= peakMountain(arr,n);
   cout<<"Peak Index in a Mountain Array : "<<ans<<endl;
}