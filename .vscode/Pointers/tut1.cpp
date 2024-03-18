#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "address of a is : " << &a << endl;
    // pointer creation
    int *ptr = &a;
    // accessing value store at address store in ptr
    cout << "Accessing : " << *ptr << endl;
    cout << "address of a is : " << ptr << endl;
    return 0;
}