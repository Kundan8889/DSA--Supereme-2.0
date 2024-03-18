#include<iostream>
using namespace std;
void printCol(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[][4]={ 
        {1,2,3,4},
        {-1,-2,-3,-6},
        {23,25,27,29}
    };
    int row=3;
    int col=4;
    printCol(arr,row,col);
    return 0;
}
