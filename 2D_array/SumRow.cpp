#include<iostream>
using namespace std;
int printSum(int arr[][5],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for( int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
         cout<<" sum of row "<<i<<" is : "<<sum<<endl;
         cout<<endl;
    }
    return sum;
}
int main(){
     int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};
        int row=4;
        int col=5;
        cout<<"\nsum of rowwise : "<<printSum(arr,row,col)<<" ";
}