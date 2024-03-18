#include<iostream>
using namespace std;
int decimalTobinary(int n){
    while(n>0){
    int bit=n%2;
    cout<<bit<<endl;
    n=n/2;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the dacimal number: "<<endl;
    cin>>n;
    int binary=decimalTobinary(n);
    return 0;
}