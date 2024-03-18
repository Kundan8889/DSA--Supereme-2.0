#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={32,54,12,43,22,3};
    sort(v.begin(),v.end());
    print(v);
    return 0;
}