#include<iostream>
#include<deque>
using namespace std;
class dequeue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    dequeue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void pushBack(int val){
    // overflow
        if((rear==size-1&&front==0)||(rear=front-1)){
            cout<<"overflow"<<endl;
        }
        // check empty
        else if(front==-1&&rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        // circular nature
        else if(rear==size-1&&front!=0){
            rear=0;
            arr[rear]=val;
        }
        // normal case
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void pushFront(int val){
        // overflow
        if((rear==size-1&&front==0)||(rear=front-1)){
            cout << "Overflow: Cannot pushFront, deque is full" << endl;
        }
        // Check if the deque is empty
        else if(front==-1&&rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
         // Adjust front pointer for circular nature
        else if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=val;
        }
        // normal case
        else{
            front--;
            arr[front]=val;
        }
    }
    void popFront(){
        // underflow
        if(front==-1&&rear==-1){
            cout<<" queue underflow"<<endl;
        }
        // single element
        else if(front==rear){
            arr[front]=-1;
            front--;
            rear--;
            
        }
        // circular nature
         else if(front==size-1){
            front=0;
            arr[front]=-1;   
        }
        // nomal case
        else{
            arr[front]=-1;
            front++;
        }
    }
        void popBack(){
        // underflow
        if(front==-1&&rear==-1){
            cout<<" queue underflow"<<endl;
        }
        // single element
        else if(front==rear){
            arr[rear]=-1;
            front--;
            rear--;
            
        }
        // circular nature
         else if(rear==0){
            rear=size-1;
            arr[rear]=-1;
            
        }
        // nomal case
        else{
            arr[rear]=-1;
            rear--;
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
  dequeue dq(5);
   dq.print();
   dq.pushBack(20);
    dq.print();

  return 0;
    
}