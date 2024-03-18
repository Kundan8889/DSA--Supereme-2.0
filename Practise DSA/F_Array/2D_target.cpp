#include<iostream>
using namespace std;
int findTarget(int arr[][3],int target,int col,int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
         cout<<endl;
    }
    return 0;
}
int main(){
    int arr[3][3]={
        {11,12,13},
        {21,22,23},
        {31,32,33}
    };
    int target=20;
    int col=3;
    int row=3;
    cout<<"target found or not : "<<findTarget(arr,target,col,row)<<endl;
    return 0;
}