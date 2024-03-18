#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of size in array :"<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the array: "<<endl;;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"given number replaced by one:"<<endl;;
    for(int i=0;i<n;i++){
        arr[i]=1;
        cout<<arr[i]<<" ";
    }
}