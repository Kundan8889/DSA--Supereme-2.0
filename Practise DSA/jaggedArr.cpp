#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<vector<int>>v){

for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){
    vector<vector<int>>v;
    vector<int>v1(1,2);
    vector<int>v2(3,4);
    vector<int>v3(6,7);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    printVector(v);
    return 0;
}