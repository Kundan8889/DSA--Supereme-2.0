#include<iostream>
using namespace std;
void rightShiftArray(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
//by modulo
int rightShiftArray2(int arr[],int n,int k){
    int ans=0;
    for(int index=0;index<n;index++){
       int ans=(index+k)%n;
       [newindex]=arr[index];
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int k=2;
    rightShiftArray2(arr,n,k);
    cout<<"printing the array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}