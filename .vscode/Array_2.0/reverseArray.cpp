#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int s=0;
    int e = size-1;
    while (s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}
void printArray(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){
   int arr[6]={1,3,5,7,9,12};
   int size=6;
   printArray(arr,size);
   reverseArray(arr,size); 
   printArray(arr,size);
   return 0;
}