#include<iostream>
using namespace std;
void printRow(int arr[][5],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printcol(int arr[][5],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[4][5]={{1,2,3,4,5},
                   {2,4,6,8,10},
                   {3,6,9,12,15},
                   {4,8,12,16,20}
                   };
    int col=5;
    int row=4;
    cout<< "row wise : " <<endl;
    printRow(arr,row,col);
    cout<< "column wise : " <<endl;
    printcol(arr,row,col);
    return 0;
}