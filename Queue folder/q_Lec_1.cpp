#include<iostream>
#include<queue>
using namespace std;
int main(){
    // creation
    queue<int>q;
    // insertion
    q.push(10);
    q.push(20);
     q.push(30);
    // remove
    q.pop();
    // size
    cout<<"size : "<<q.size()<<endl;
    if(q.empty()){
    cout<<"queue is empty "<<endl;
    }
    else{
    cout<<"queue is not empty "<<endl;
    }
    // front
    cout<<"front element of queue is "<<q.front()<<endl;
    // last ya rear
    cout<<"Last element of queue is "<<q.back()<<endl;
}