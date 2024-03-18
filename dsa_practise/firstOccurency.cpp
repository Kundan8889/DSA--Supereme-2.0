#include<iostream>
#include<vector>
using namespace std;
int findFirstOccurency( vector<int>&v,int n,int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
      if(v[mid]==target){
        ans=mid;
        e=mid-1;
      }
      else if(v[mid]<target){
        s=mid+1;
      }
      else{
        e=mid-1;
      }
    }
    return ans;
};
// find last occurence->
int findLastOccurency( vector<int>&v,int n,int target){
    int s=0;
    int e=n-1;
    int ans=1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
      if(v[mid]==target){
        ans=mid;
        s=mid+1;
      }
      else if(v[mid]<target){
        s=mid+1;
      }
      else{
        e=mid-1;
      }
    }
    return ans;
};
int findTotalOccurency( vector<int>&v,int n,int target){
int first=findFirstOccurency(v,n,target);
int last=findLastOccurency(v,n,target);
int total=last-first+1;
return total;
};

int main(){
    vector<int>v={10,20,40,40,40,60};
    int n=6;
    int target=40;
//    cout<<findFirstOccurency(v,n,target)<<endl;
//    cout<<findLastOccurency(v,n,target)<<endl;
   cout<<findTotalOccurency(v,n,target)<<endl;
   
return 0;
}