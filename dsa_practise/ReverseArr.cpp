#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e){
      swap(arr[s],arr[e]);
      s++;
      e--;
    }
};
void extremeArr(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e){
     if(s==e){
        cout<<arr[s]<<" ";
     }
     else{
        cout<<arr[s]<<" ";
        cout<<arr[e]<<" ";
     }
       s++;
       e--;
    }
};
void printArr(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
};
int main(){
int arr[]={10,20,30,40,50,60};
int n=6;
// reverse(arr,n);
// printArr(arr,n);
cout<<"Extreame array:"<<endl;
extremeArr(arr,n);
// printArr(arr,n);
}