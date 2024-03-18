#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n=5;
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<"the value of index "<<i<<" is :"<<endl;
        cin>>arr[i];
    }
    cout<<"give element of array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\nadding the given element of array is : "<<endl;
    for(int i=0;i<n;i++){
       sum=i+arr[i];
        cout<<sum<<"\t";
    }
    cout<<"\nTotal sum is "<<sum<<endl;
}