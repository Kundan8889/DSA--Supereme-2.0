#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array of size :"<<endl;
    cin>>n;
    int sum=0;
    int arr[5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;
    for(int i=0;i<n;i++){
        cout<<" arr["<<i<<"]= "<<arr[i]<<endl;
        sum=sum+arr[i];
    }
    cout<<endl<<" sum of array is "<<sum;
    return 0;
}