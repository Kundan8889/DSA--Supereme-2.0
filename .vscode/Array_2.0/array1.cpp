#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // cout<<"address of a is: "<<&a<<"Size of a:"<<sizeof(a)<<endl;
    // int arr[10];
    // cout<<"address of a is: "<<&arr<<endl;
    int arr[5];
    int n=5;
    for(int i=0;i<n;i++){
        cout<<"Enter the value for "<<i<<" :"<<endl;
        cin>>arr[i];
    }
    cout<<"printing the array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}