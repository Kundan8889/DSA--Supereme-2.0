#include <iostream>
using namespace std;
/* Here actual me int arr[] ek pointer hain so agar ham *arr likhe to ish prakar bhi chalega*/
void solveArray(int *arr, int size)
{
    cout << "size of array inside solve fun. : " << sizeof(arr) << endl;
}
int main()
{
    int arr[] = {5, 7, 9, 10};
    cout << "size of array: " << sizeof(arr) << endl;
    solveArray(arr, 4);
}