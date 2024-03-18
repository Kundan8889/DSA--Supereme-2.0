#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        int totalcolum=n-row;
        for(int col=0;col<totalcolum;col++){
            if(col==0||col==totalcolum-1){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}