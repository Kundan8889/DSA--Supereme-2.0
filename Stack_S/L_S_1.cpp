#include<iostream>
#include<stack>
using namespace std;
int main(){
// creation 
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
// size cheack
cout<<"size of stack is: "<<st.size()<<endl;
// remove
st.pop();
// check empty 
if(st.empty()){
    cout<<"stack is empty"<<endl;
}
else {
     cout<<"stack is not empty"<<endl;
}
cout<<st.top()<<endl;
}