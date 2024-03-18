#include <iostream>
using namespace std;
void SelctionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j] < arr[minIndex])
            {
               minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main()
{
    int arr[] = {44, 33, 55, 22, 11};
    int n = 5;
    SelctionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}