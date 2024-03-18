#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[],int n,int index,vector<int>&ans){
    //Base case
    if(index>=n){
        return;
    }
    if(arr[index]%2==0){
        ans.push_back(arr[index]);
    }
    //recursive call
     solve(arr,n,index+1,ans);
}
int main(){
    int arr[]={11,23,45,66,77,98};
    int n=6;
    int index=0;
    vector<int>ans;
    solve(arr,n,index,ans);
    //printing vector
    for(int num:ans){
        cout<<num<<" ";
    }



}