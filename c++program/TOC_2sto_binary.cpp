#include<iostream>
using namespace std;
int decimalTobinary(int n){
    while(n>0){
    int bit=n%2;
    cout<<bit<<" ";
    n=n/2;
    }
    int binary_2s=~bit+1;
    return 0;
}

int main(){
    int n;
    cout<<"\nEnter the dacimal number: "<<endl;
    cin>>n;
    int binary=decimalTobinary(n);
    int binary_2s=Two_Binary(n);
     cout<<"\nGive number of  2’s complement of a given binary number is : "<<binary_2s<<endl;
    return 0;
}