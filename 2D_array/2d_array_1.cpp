#include<iostream>
using namespace std;
void printArray(int arr[][5],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
void columWise(int arr[][5],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[4][5]={
    {1,2,3,4,5},
    {2,4,6,8,10},
    {1,3,5,7,9},
    {0,1,5,6,5}
   };
   int row=4;
   int col=5;
   printArray(arr,row,col);
//    columWise(arr,row,col);
}