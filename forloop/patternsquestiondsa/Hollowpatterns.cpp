#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<"\n";
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(i==0||j==0||i==n||j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        
        }
        cout<<endl;
    }
}