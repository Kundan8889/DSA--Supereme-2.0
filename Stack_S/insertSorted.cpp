#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>&st,int&X){
    // yha empty bhi cheak karna varna galti karega baad me
    if(st.empty()||X>st.top()){
        st.push(X);
        return;
    }
    // ek case main solve karunga
    int temp=st.top();
    st.pop();
    // recursion 
    insertSorted(st,X);
    // backtrack
    st.push(temp);
}
void sortStack(stack<int>&st){
    // base case
     if(st.empty()){
        return;
    }
  // ek case main solve karunga
  int temp=st.top();
  st.pop();
//   recursion
 sortStack(st);
//  backtrack
insertSorted(st,temp);
}
int main(){
stack<int>st;
int X=5;
st.push(10);
st.push(34);
st.push(59);
st.push(20);
st.push(40);
sortStack(st);
// insertSorted(st,X);
while (!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}