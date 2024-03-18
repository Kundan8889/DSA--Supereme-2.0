#include<iostream>
using namespace std;
int findTarget(int arr[],int size,int index,int target){
    //Base case
    if(index>=size){
        return -1;
    }
    //processing
    if(arr[index]==target){
        return target;
    }
    //recrsive call
    int ans=findTarget(arr,size,index+1,target);
    return ans;
}
int main(){
    int arr[]={22,34,5,66,78};
    int size=5;
    int index=0;
    int target=7;
    int ans=findTarget(arr,size,index,target);
    cout<<"target found : "<<ans<<" ";

}
