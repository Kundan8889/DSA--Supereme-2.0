#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // cout<<"Address of a: "<<&a<<endl;
    // int arr[10];
    // cout<<"Base address of array: "<<&arr<<endl;
    // print arrays:
    // int arr[5]={1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     cout<<"array printed: "<<arr[i]<<endl;
    // }
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cout<<"input of array is  : "<<i<<" ";
    //     cin>>arr[i];
    //     // cout<<endl;
    // }
    // cout<<"after printing of array : "<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    //printing of array in double:
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
        // cout<<endl;
    }
    cout<<"after printing of array : "<<endl;
    for(int i=0;i<5;i++){
        cout<<2*arr[i]<<" ";
    }
}