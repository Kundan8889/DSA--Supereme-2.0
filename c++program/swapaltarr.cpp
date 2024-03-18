#include <iostream>
using namespace std;
void SwapNumber(int arr[], int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {3, 5, 7, 9, 2,4};
    SwapNumber(arr, 6);
    printArray(arr, 6);
    return 0;
}