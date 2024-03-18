#include <iostream>
#include <limits.h>
using namespace std;
int findMinArray(int arr[], int size)
{
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}
int findMaxArray(int arr[], int size)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxAns)
        {
            maxAns = arr[i];
        }
    }
    return maxAns;
}
int main()
{
    int arr[] = {2, 5, 8, 9, 0, -3, 14};
    int size = 7;
    int minAns = findMinArray(arr, size);
    int maxAns = findMaxArray(arr, size);
    cout << "minimum ans: " << minAns << endl;
    cout << "maximum ans: " << maxAns << endl;
}