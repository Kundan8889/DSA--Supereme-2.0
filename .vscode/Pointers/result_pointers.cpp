#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int *ptr = &a;
    
    cout << "accessing of a is " << a << endl;
    cout << "Addressing of ptr is " << ptr << endl;
    cout << "accessing of *ptr is " << *ptr << endl;
    //&a=?
    cout << "&a is: " << &a << endl;
    ;
    // cout<<"*a is: "<<*a; -->this is invalid type argument of unary
    cout << "&ptr : " << &ptr << endl;
    cout << "(*ptr)++ is:" << (*ptr)++ << endl;
    cout << "++(*ptr) is:" << ++(*ptr) << endl;
    cout << "*ptr/2 is:" << *ptr / 2 << endl;
    cout << "*ptr-2 is:" << *ptr - 2 << endl;
}