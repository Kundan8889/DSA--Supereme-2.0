#include<iostream>
using namespace std;
//agar *p hain to 
// void solve(int* p){ 
//     p=p+1;// int* p => pass by value
// }
void solve(int* &p){ 
    p=p+1;// int* &p => pass by refrence
}
int main(){
    int a=5;
    int*p=&a;
    cout<<"p: "<<p<<endl;
     cout<<"*p: "<<*p<<endl;
      cout<<"&p: "<<&p<<endl;
      solve(p);
       cout<<"p: "<<p<<endl;
     cout<<"*p: "<<*p<<endl;
      cout<<"&p: "<<&p<<endl;
}