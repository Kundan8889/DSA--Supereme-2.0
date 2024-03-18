#include<iostream>
using namespace std;
 bool checkSorted(int arr[],int size,int index){
    //Base case
    if(index>=size){
        return true;
    }
    //processing 
    if(arr[index]>arr[index-1]){
        // recursive call
        bool aageKaAns=checkSorted(arr,size,index+1);
        return aageKaAns;
    }
    else{
        // sorted nhi hain
        return false;
    }
 }
int main(){
    int arr[]={};
    int size=0;
    int index=0;
    bool isSorted=checkSorted(arr,size,index);
    if(isSorted){
        cout<<" array is sorted "<<endl;
    }
    else{
        cout<<"array is Not sorted "<<endl;
    }

}