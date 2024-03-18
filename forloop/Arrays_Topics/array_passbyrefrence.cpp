#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void func(int brr[],int size){
     brr[0]=brr[0]+10;
    printArray(brr,size);
}
int main(){
    int arr[]={5,6};
    int size=2;
    func(arr,size);
    printArray(arr,size);
return 0;
}