#include<iostream>
#include<vector>
using namespace std;
int main(){
    string name="kundan";
    for(auto ch:name){
        cout<<ch<<" ";
    }
    vector<int>v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(13);
    for(auto num:v){
        cout<<num<<" ";
    }
    cout<<endl;

}