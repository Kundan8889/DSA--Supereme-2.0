#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;
    int *q = p;
    cout << a << endl;
    cout << &a << endl;
    // cout << *a << endl; -->invalid type argument of unary
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << &q << endl;
    cout << *q << endl;
}