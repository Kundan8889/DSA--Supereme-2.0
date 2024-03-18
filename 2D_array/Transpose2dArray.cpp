//only square ke liye hi chalega
#include<iostream>
using namespace std;
void printArray(int arr[][4],int row,int col){
   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int arr[][4],int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
         
    }
}
int main(){
    int arr[4][4] = {
        {2, 4, 6, 8},
        {3, 6, 9, 12},
        {5, 10, 15, 20},
        {6, 12, 18, 24}
    };
    int row=4;
    int col=4;
    cout<<"\nprinting before transpose : "<<endl;
    printArray(arr,row,col);
     cout<<"\nupdate  transpose : "<<endl;
    transpose(arr,row,col);
     cout<<"\nprinting  after transpose  : "<<endl;
    printArray(arr,row,col);
}