#include<iostream>
using namespace std;
bool binSearch(int arr[],int s,int e,int target){
    //Base Case
    if(s>e){
        return false;
    }
    int mid= s+(e-s)/2;
    if(arr[mid]==target){
       return mid;
    }
    if(arr[mid]<target){
        //right me jao
        return binSearch(arr,mid+1,e,target);
    }
    else{
        return binSearch(arr,s,mid-1,target);
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int index=0; 
    int size=5;
    int s=0;
    int e=size-1;
    int target=110;
    bool isTarget=binSearch(arr,s,e,target);
    if(isTarget){
        cout<<"target found "<<endl;
    }
    else{
        cout<<"target not  found "<<endl;
    }

}