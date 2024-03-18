#include<iostream>
#include<limits.h>
using namespace std;
int findMax(int arr[][3],int col,int row){
    int Max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>Max){
               Max=arr[i][j];
            }
        }
    }
    return Max;
}
int findMin(int arr[][3],int col,int row){
    int Min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<Min){
               Min=arr[i][j];
            }
        }
    }
    return Min;
}
int main(){
    int arr[3][3]={
        {110,12,130},
        {-2100,222,231},
        {313,3200,333}
    };
    int col=3;
    int row=3;
    cout<<"Maximum : "<<findMax(arr,col,row)<<endl;
    cout<<"Minimum : "<<findMin(arr,col,row)<<endl;
    return 0;
}