#include<iostream>
using namespace std;
int findOddOccuringElement(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if(s==e){
            return s;
        }
        if(mid&1){
            //mid&1-->odd ke liye use hota hain
        if(mid-1>=0 && arr[mid]==arr[mid-1]){
        s=mid+1;
        }
        else{
            e=mid-1;
        }
        }
        else{
            if(mid+1<n && arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                //single element huva to
                e=mid;
            }
        }

    }
    return -1;
}
int main(){
    int arr[]={1,1,2,2,5,5,7,7,8,8,3,3,6};
    int n=13;
    int ansIndex=findOddOccuringElement(arr,n);
    cout<<"Final ans is : "<<arr[ansIndex]<<endl;
}