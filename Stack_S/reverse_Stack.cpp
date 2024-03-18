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
void reverseStack(stack<int>&st){
    if(st.empty()){
        return;
    }
    // ek case main solve kaunga
    int temp=st.top();
    st.pop();
    // recursion
    reverseStack(st);
    // backtrack
    insertAtbuttom(st,temp);
}
int main(){
stack<int>st;
int element=400;
st.push(10);
st.push(20);
st.push(30);
cout<<"reverse stack : "<<endl;
reverseStack(st);
while (!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}