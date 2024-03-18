#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (s == e)
        {
            cout << arr[s] << " ";
        }
        else
        {
            cout << arr[s] << " ";
            cout << arr[e] << " ";
        }
        s++;
        e--;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50,60};
    int n = 6;
    printArray(arr, n);
    reverseArray(arr, n);
    // printArray(arr,n);
}