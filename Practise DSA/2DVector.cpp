#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<vector<int>>v,int col,int row){
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){
    vector<vector<int>>v{
        {1,2,3},
        {-1,-2,-3}
    };
    int row=2;
    int col=3;
    printVector(v,col,row);
    return 0;
}