#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
    }
     return false;
}
void printArray(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
int main(){
    int arr[5]={2,4,6,8,10};
    int n=5;
    int target=11;
    //printArray(int arr,int n,int target);
    bool ans=linearsearch(arr,n,target);
    if(ans==1){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
}