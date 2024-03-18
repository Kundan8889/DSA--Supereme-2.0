#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter of n value : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%3==0){
            continue;//continue means value ko skip karna;
        }
        cout<<"Not divisible by 3 : "<< i<<endl;
    }
}