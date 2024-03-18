#include<iostream>
#include<limits.h>
using namespace std;
int Min=INT_MAX;
void leftShitNag(int arr[],int size){
     int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    cout<<"\n";
};

int main(){
    int arr[]={-4,-6,-1,0,5,3,8,9,-22};
    int size=9;
    printArr(arr,size);
    leftShitNag(arr,size);
    printArr(arr,size);
    return 0;
}