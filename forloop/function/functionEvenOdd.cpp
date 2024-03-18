#include<iostream>
using namespace std;
void printNum(int n){
        if(n%2==0){
            cout<<"Even num:"<<endl;
        }
        else{
            cout<<"Odd num:"<<endl;
        }
        //cout<<i<<endl;
}
int main(){
    printNum(10);
}