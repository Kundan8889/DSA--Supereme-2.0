#include<iostream>
#include<stack>
using namespace std;
 void solve(stack<int>&st, int&pos,int&ans){
    // base case
    if(pos==1){
        ans=st.top();
        return;
    }
    // ek case ham solve karenge
    pos--;
    int temp=st.top();
    st.pop();
    // recursion
   solve(st,pos,ans);
    // backtraking
   st.push(temp);
 }
 int getmiddleElement(stack<int>&st){
    int size=st.size();
   
    // stack is empty
    if(st.empty()){
        cout<<"stack is empty and not middle element"<<endl;
        return -1;
    }
   
    else{
         int pos=0;
        // stack is not empty
       // odd
       if(size&1){
        pos=(size+1)/2;
       }
       else{
        // even
        pos=size/2;
       }
        int ans=-1;
        solve(st,pos,ans);
       return ans;
    }
 };
int main(){
     stack<int>st;
     st.push(12);
     st.push(6);
     st.push(8);
     st.push(9);
     st.push(9);
     st.push(5);
     st.push(11);
     st.push(5);
     st.push(5);
     st.push(9);
     st.push(6);
     st.push(11);
     int mid=getmiddleElement(st);
     cout<<"middle  element : "<<mid<<endl;
}