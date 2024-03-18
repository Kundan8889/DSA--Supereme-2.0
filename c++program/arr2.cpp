#include<iostream>#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
     int temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     i+=2;
     j-=2;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}
int main(){
    int arr[8]={2,1,3,4,5,6,7,9};
    reverse(arr,8);
    printArray(arr,8);
    return 0;
}
