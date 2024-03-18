#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int arr[9]={1,3,1,4,3,5,7,5,4};
    for( i=0;i<n;i++){
        arr[i]=arr[i]^arr[i];
    }
    cout<<arr[i];
    return 0;
}