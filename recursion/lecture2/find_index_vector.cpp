#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[],int size,int index,int target,vector<int>&ans){
    //Base case
    if(index>=size){
        return ;
    }
    //processing
    if(arr[index]==target){
       ans.push_back(index);
    }
    //recrsive call
  solve(arr,size,index+1,target,ans);
    }
int main(){
    int arr[]={22,34,5,66,34,78,34};
    int size=7;
    int index=0;
    int target=34;
    vector<int>ans;
    solve(arr,size,index,target,ans);
    for(int num:ans){
        cout<<num<<" ";
    }
    

}
