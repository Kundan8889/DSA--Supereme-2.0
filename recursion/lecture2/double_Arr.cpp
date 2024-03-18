#include<iostream>
using namespace std;
void doubleArray(int arr[],int n,int index){
//Base case
if(index>=n){
    return;
}
arr[index]=2*arr[index];
//recursive call
doubleArray(arr,n,index+1);
}
int main(){
    int arr[]={11,20,34,5,7,88,96};
    int n=7;
    int index=0;
     doubleArray(arr,n,index);
     for(int num:arr){
        cout<<num<<" ";
     }
   
}