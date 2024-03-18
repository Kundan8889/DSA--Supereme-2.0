#include <iostream>
#include<deque>
using namespace std;
void printFirstNag(int*arr,int n,int k)
{
    deque<int>dq;
    // process first k element-first window
    for(int index=0;index<k;index++){
        int element=arr[index];
        if(element<0){
            dq.push_back(index);
        }
    }
    // process remaining windows->Removal and adition
    // kyo ki uper vala loop k-1 pr end hoga 
    // to bache huve k se start karenge
    for(int index=k;index<n;index++){
        // aage badne se pehle purani windows ka answer nikal do
        if(dq.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[dq.front()]<<" ";
        }
        // cheak removal ->jo bhi index out of range hain,ushko queue me se remove kardo
        if(index-dq.front()>=k){
            dq.pop_front();
        }
        // addition  
        if(arr[index]<0){
            dq.push_back(index);
        }
    }
     // Print last window's answer after the loop
        if(dq.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[dq.front()]<<" ";
        }
};
int main()
{
    int arr[]={2,-5,4,-1,-2,0,5};
    int size=7;
    int k=3;
    printFirstNag(arr,size,k);
    return 0;
}