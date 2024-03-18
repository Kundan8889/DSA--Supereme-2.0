#include<iostream>
using namespace std;
int findTarget(int arr[],int size,int index,int target){
    //Base case
    if(index>=size){
        return -1;
    }
    //processing
    if(arr[index]==target){
       cout<< index<<" ";
    }
    //recrsive call
    int ans=findTarget(arr,size,index+1,target);
    return ans;
}
int main(){
    int arr[]={22,34,5,66,34,78,34};
    int size=7;
    int index=0;
    int target=34;
    int ans=findTarget(arr,size,index,target);
    

}
