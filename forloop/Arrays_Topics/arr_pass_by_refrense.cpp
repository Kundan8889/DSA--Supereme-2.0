#include<iostream>
using namespace std;
void printArray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
void func(int arr[],int n){
    arr[0]=20;
    arr[1]=30;
    arr[2]=50;
    printArray(arr,n);
}
int main(){
    int arr[]={1,3,5};
    int n=3;
    func(arr,n);
    printArray(arr,n);
}