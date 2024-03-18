#include<iostream>
#include<vector>
using namespace std;
int findTarget(vector<int>&v,int size,int target){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
   vector<int>v{10,20,30,40,50,60,70};
    int size=6;
    int target=60;
    int ans=findTarget(v,size,target);
    if(ans==-1){
        cout<<" target not found "<<endl;
    }
    else{
         cout<<"target found "<<endl;
    }
    return 0;
}