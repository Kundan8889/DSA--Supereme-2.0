// insert 2 stack in a single array
#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int data)
    {
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }
    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            // no space
            cout << "Overflow" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            // no space
            cout << "Overflow" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
        cout << endl;
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }
    void printStack()
    {
        cout << endl;
        cout << " top1 " << top1 << endl;
        cout << " top2 " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack st(6);
    st.push1(10);
    st.printStack();
}