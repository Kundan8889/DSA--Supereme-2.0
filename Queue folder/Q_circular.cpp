#include<iostream>
#include<queue>
using namespace std;
class CQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
   CQueue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
     void push(int val){
        // check full
        if(rear==size-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        // check empty
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        // circular nature
        else if(rear==size-1&&front!=0){
            rear=0; 
            arr[rear]=val;
        }
        else{
           // normal flow
            rear++;
            arr[rear]=val;
           
        }
     }
     void pop(){
        // underflow
        if(front==-1 && rear==-1){
            cout<<"Queue is underflow"<<endl;
        }
        // singleElement
        else if(front==rear){
            arr[front]=-1;
            front++;
        }
        // circular nature
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        // normal flow
        else{
            arr[front]=-1;
            front++;
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
    CQueue q(5);
     q.print();
     q.push(10);
     q.print();
     q.push(20);
     q.print();
     q.push(30);
     q.print();
     q.push(40);
     q.print();
}