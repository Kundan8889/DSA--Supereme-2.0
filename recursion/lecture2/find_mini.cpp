#include<iostream>
#include<limits.h>
using namespace std;
void findMin(int arr[],int size,int index,int &mini){  // -->hamne int mini kardiya jo ki pass by value hain jo ki pass by value me copy banti hain to hame int & to actualy mini ke andar value store karwane ke liye by refrence value ko store karvana padega 
    //Base Case
    if(index>=size){
    return ;
}
mini=min(mini,arr[index]);
//recursive call
 findMin(arr,size,index+1,mini);
}
int main(){
    int arr[]={10,20,40,5,3,9};
    int size=6;
    int index=0;
    int mini=INT_MAX; // --> int &mini by refrence
    findMin(arr,size,index,mini);
    cout<<"minimum number of in array : "<<mini<<endl;
}