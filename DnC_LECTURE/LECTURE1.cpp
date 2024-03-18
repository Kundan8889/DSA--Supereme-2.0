#include <iostream>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;
    // create left and right array
    int *left = new int[lenLeft];
    int *right = new int[lenRight];
    // copy value from original array to left array
    int k = s;
    for (int i = 0; i < lenLeft; i++)
    {
        left[i] = arr[k];
        k++;
    }
    // copy value from original array to right array
     k = mid + 1;
    for (int i = 0; i <lenRight; i++)
    {
        right[i] = arr[k];
        k++;
    }
    // actual merge sort is here
    // leftarray is already sorted
    // rightarray is already sorted
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    while (leftIndex < lenLeft && rightIndex < lenRight)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }
        else
        {
            arr[mainArrayIndex] = right[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }
    }
    // first case -->left array exhaust but left array me element abhi bhi bache hain
    while (rightIndex < lenRight)
    {
        arr[mainArrayIndex] = right[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }
    // second case -->right array exhaust but left array me element abhi bhi bache hain
    while (leftIndex < lenLeft)
    {
        arr[mainArrayIndex] = left[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }
    // 1 more step pending
    delete[] left;
    delete[] right;
}
void mergeSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }
    // Break
    int mid = s + (e - s) / 2;
    // left and right sorted
    //  first is  left
    //  l==>s-->mid,
    // r==>mid+1-->e
    mergeSort(arr, s, mid);
    // second is left
    mergeSort(arr, mid + 1, e);
    //merge to sorted array
    merge(arr,s,e);
}
int main()
{
    int arr[] = {3, 9, 5, 7, 10, 1};
    int size = 6;
    int s = 0;
    int e = size - 1;
    cout << "before merge sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, s, e);
    cout << "After merge sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}