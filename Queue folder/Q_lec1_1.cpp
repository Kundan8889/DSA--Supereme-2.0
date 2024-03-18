#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void push(int val){
        //cheack full
        if(rear==size-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
       else if(front==-1&&rear==-1){
          // empty case
        front++;
        rear++;
        arr[rear]=val;
       }
       else{
        // normal case
        rear++;
        arr[rear]=val;
       }
    }
       void pop(){
        // underflow
        if(front==-1&&rear==-1){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        // if for single
        else if(front==rear){
            // bcuz delete front se hota hain in queue 
            arr[front]=-1;
            front=-1;
            rear=-1;
           
        }
        else{
            // normal case
            arr[front]=-1;
            front++;

        }
       }
       int getsize(){
        // jb empty hain
        if(front==-1&&rear==-1){
            return 0;
        }
        else{
            return rear-front+1;
        }
       }
       bool isEmpty(){
        if(front==-1&&rear==-1){
            return true;
        }
        else{
            return false;
        }
       }
       int getfront(){
        if(front==-1){
            cout<<"no element in queue ,can not give front element"<<endl;
            return -1;
        }
        else{
            // non empty
            return arr[front];
        }
       }
       int getRear(){
        // jab empty ho
        if(rear==-1){
            cout<<"no element in queue ,can not give rear element"<<endl;
            return -1; 
        }
        else{
             // non empty
            return arr[rear];
        }
    }
    void print(){
        cout<<"printing Queue: "<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
// creation 
Queue q(5);
q.print();
// cout<<" queue is empty or not: "<<q.isEmpty()<<endl;
cout<<" front of queue : "<<q.getfront()<<endl;
cout<<" rear of queue : "<<q.getRear()<<endl;
q.push(10);
q.print();
cout<<" front of queue : "<<q.getfront()<<endl;
cout<<" rear of queue : "<<q.getRear()<<endl;
q.push(20);
q.print();
q.push(30);
q.print();
// cout<<" rear of queue : "<<q.getRear()<<endl;
q.push(40);
q.print();
q.push(50);
q.print();
cout<<"size of queue "<<q.getsize()<<endl;
cout<<" queue is empty or not: "<<q.isEmpty()<<endl;
cout<<" front of queue : "<<q.getfront()<<endl;
cout<<" rear of queue : "<<q.getRear()<<endl;
return 0;
}