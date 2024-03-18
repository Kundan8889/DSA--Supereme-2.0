#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[10]={1,3,5,7,9};
     memset(arr,2, sizeof(arr));
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}