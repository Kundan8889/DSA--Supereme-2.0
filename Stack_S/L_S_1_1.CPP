#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int*arr;
    int size;
    int top;
    Stack(int data){
        //initialize of array
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"Stack is overflow"<<endl;
            return ;
        }
        else{
            top++;
            arr[top]=data;
        }
    }
        void pop(){
            if(top==-1){
                cout<<"Stack is underflow "<<endl;
                return;
            }
            else{
                top--;
            }
        }
        bool isEmpty(){
            if(top==-1){
                //han empty hain
                return true;
            }
            else{
                return false;
            }
        }
        int getTop(){
            // top ka element kese acesess karte hain
            if(top==-1){
                cout<<"Stack is empty "<<endl;
            }
            else{
                return arr[top];
            }
        }
        int getSize(){
            return top+1;
        }
        // print Stack
        void print(){
             cout<<" Top: "<<top<<endl;
            cout<<" Top Element: "<<getTop()<<endl;
            cout<<"Stack: ";
            for(int i=0;i<getSize();i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    };
int main(){
    //creation
    Stack st(8);
    //push
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();
    st.push(40);
    st.print();
    st.push(50);
    st.print();
    return 0;
}