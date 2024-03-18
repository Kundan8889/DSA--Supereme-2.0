#include<iostream>
using namespace std;
int main(){
    // string name;
    // cout<<"Enter name : "<<endl;
    // cin>>name;
    // string temp="";
    //     cout<<"Length of string : "<<name.length()<<endl;
    // cout<<" string is empty or not : "<<temp.empty()<<endl;
    // cout<<"front of string : "<<name.front()<<endl;
    // cout<<"back of string : "<<name.back()<<endl;
    //append mean 2 string ko jodna
    // string s1=" kundan ";
    // string s2=" rathore ";
    // string app=s1.append(s2);
    // cout<<"append s1 or s2 string  :"<<app<<endl;
    //erase -->
    // string str="hey my name is kundan rathore";
    // string newstr=str.erase(0,15);
    // cout<<"erase :"<<newstr<<endl;
    // string name="Hii  my self  Kundan rathore  i am from ";
    // string city=" khachrod ";
    // name.insert(39,city);
    // cout<<" About your self : "<<name<<endl;
    string name= "kundarathor";
    name.push_back('e');
    cout<<name<<endl;
    name.pop_back();
    cout<<"here"<<name;
    
}