#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void AlternativeSwap(int arr[], int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[8] = {1, 3, 5, 7, 2, 8, 0, 4};
    int brr[6] = {2, 5, 1, 9, 7, 3};
    AlternativeSwap(arr,8);
    AlternativeSwap(brr,6);
    printArray(arr, 8);
    printArray(brr, 6);
    return 0;
}