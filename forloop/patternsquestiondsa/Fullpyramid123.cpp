#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<" ";
        }
        for(int col=0;col<row;col++){
            cout<<col+row;
        }
        for(int col=1;col<2*row+1;col++){
            cout<<2*row+col-1;
        }
        cout<<"\n";
    }
}