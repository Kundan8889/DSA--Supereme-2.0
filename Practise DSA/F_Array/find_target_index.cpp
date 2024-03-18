#include<iostream>
using namespace std; 
 int findElement(int arr[], int N, int X){
        int index=-1;
        int s=0;
        int e=N-1;
        while(s<=e){
          if(arr[s]==X){
            break;
            }
            index++;
            s++;
        }
        return index;
    };
    int main(){
        int arr[]={1,2,3,4,5};
        int X=4;
        int N=5;
        int len=findElement(arr,N,X);
        cout<<"len "<<len;
    }