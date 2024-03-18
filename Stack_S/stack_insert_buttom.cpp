#include<iostream>
#include<stack>
using namespace std;
void insertAtbuttom(stack<int>&st,int&element){
if(st.empty()){
st.push(element);
return;
}
//1 case me solve karungan 
int temp=st.top();
st.pop();
//baki recursion bhaiya sambhal lenge
insertAtbuttom(st,element);
// backtracking
st.push(temp);
}
int main(){
stack<int>st;
int element=400;
st.push(10);
st.push(20);
st.push(30);
insertAtbuttom(st,element);
while (!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}