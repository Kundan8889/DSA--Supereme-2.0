#include<iostream>
#include<vector>
using namespace std;
int main(){
// vector<int>v(5,8);
// cout<<"size of vector : "<<v.size()<<endl;
// int n=v.size();
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }
vector<vector<int>>arr(5,vector<int>(10,-1));
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}