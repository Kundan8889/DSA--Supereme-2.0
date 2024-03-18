#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter the character"<<"\n";
    cin>>n;
    for(char  i='A';i<=n;i++){
        for(char j='A';j<=i;j++){
        cout<<j<<" ";
        }
        for(char j=i;j>'A';){
            j--;
        cout<<j<<" ";
        }
        cout<<endl;
    }
}