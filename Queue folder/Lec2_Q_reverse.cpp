#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseQueue(queue<int>&q){
stack<int>s;
// one by one queue se element lo or stack me daalo
while(!q.empty()){
int frontElement=q.front();
q.pop();
s.push(frontElement);
}
// one by one stack se element lo or queue me daalo
while(!s.empty()){
int topElement=s.top();
s.pop();
q.push(topElement);
}
};
// by recursion 
void reverseQue(queue<int>&q){
stack<int>s;
// base case
if(q.empty()){
    return;
}
// one case i solved
int temp=q.front();
q.pop();
// recursion sambhal lega
reverseQue(q);
q.push(temp);
};
int main(){
queue<int>q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
// reverseQueue(q);
reverseQue(q);
cout<<" printing queue "<<endl;
while(!q.empty()){
    int element=q.front();
    q.pop();
    cout<<element<<" ";
}
return 0;
}