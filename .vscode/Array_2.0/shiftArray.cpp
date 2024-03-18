#include<iostream>
using namespace std;
void shiftArray(int arr[],int n,int k){
    int temp=arr[n-k];
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    int temp1=arr[n-1];
    for(int i=n-k;i>=k;i--){
        arr[i]=arr[i-1];
    }
    arr[1]=temp1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=7;
    int k=2;
    shiftArray(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
