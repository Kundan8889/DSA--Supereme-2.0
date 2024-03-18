#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter of size : ";
    cin>>size;
    int arr[15];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"] = "<<arr[i]<<" \t ";
    }
}