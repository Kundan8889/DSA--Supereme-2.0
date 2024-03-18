#include<iostream>
using namespace std;
void SumRow(int arr[][3],int col,int row){
    for(int i=0;i<row;i++){
         int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        } 
        cout<<" sum for "<<" row "<<i<<" is "<<sum<<endl;
    }
    
}
int SumCol(int arr[][3],int col,int row){
    for(int i=0;i<col;i++){
         int sum=0;
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        } 
        cout<<" sum for "<<" col "<<i<<" is "<<sum<<endl;
    }
    
}
int main(){
    int arr[3][3]={
       {1,2,3},
        {2,4,6},
        {3,3,4}
    };
    int col=3;
    int row=3;
    cout<<"print sum for rowWise : "<<endl;
   SumRow(arr,col,row);
   cout<<"print sum for colWise : "<<endl;
   SumCol(arr,col,row);
    return 0;
}