#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    int arr[10] = {23, 45, 21, 67, 45, 22, 44, 56, 76, 50};
    int brr[8] = {20, 5, 1, 9, 25, 32, 14, 36};
    int crr[7] = {10, 11, 90, 35, 21, 12, 14};
    reverse(arr, 10);
    reverse(brr, 8);
    reverse(crr, 7);
    printArray(arr, 10);
    printArray(brr, 8);
    printArray(crr, 7);
    return 0;
}