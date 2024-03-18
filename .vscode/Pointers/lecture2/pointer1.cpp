/* Note:--> agar int*ptr arr[5] likh denge to "array of pointer banjayega "
   or agar int(*ptr)[5] likh denge to Pointer to an array banjayega*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 6, 7, 8};
    // pointer to in array
    int *ptr1 = arr;
    // pointer to in array
    int(*ptr)[5] = &arr; /*yha  par hame agr &arr use karna ho to hame pointers to arr index like(*ptr)[5] ish type use karna hoga */
    cout << (*ptr)[0] << endl;
}