#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name : "<<endl;
    getline(cin,name);
    cout<<"printing name : "<<name<<endl;
    int index = 0;
    while(name[index]!='\0'){
        cout<<" index :"<<index<<" character : "<<name[index]<<endl;
         index++;
    }
     //cout<<" printing index 6 value : "<<name[6]<<endl;
     int value=(int)name[14];
     cout<<"printing the value at  last index : "<<value<<endl;
}