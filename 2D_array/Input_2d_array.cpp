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
    int arr[3][3];
   int row=3;
   int col=3;
   //printArray(arr,row,col);
   //columWise(arr,row,col);
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"Enter the input for row index : "<<i<<" colum index : "<<j<<endl;
        cin>>arr[i][j];
    }
   }
}