#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter the character : "<<endl;
   // cin>>ch;
   cin.getline(ch,100);
    cout<<" printing the value of character  : "<<ch<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<"At Index "<<i<<" "<<ch[i]<<endl;
    // }
    // char temp=ch[6];
    // int value=(int)temp;
    // cout<<"printing integer values : "<<value<<endl;
}