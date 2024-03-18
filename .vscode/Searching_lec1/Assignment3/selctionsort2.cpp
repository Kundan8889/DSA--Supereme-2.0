#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void selctionSort( vector<int>&arr)
{
    int n=arr.size();
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
    vector<int> arr = {44, 33, 55, 22, 11};
    cout<<"printing the original unsorted selection sort : "<<endl;
    printArray(arr);
     cout<<"\nprinting the original  sorted selection sort  : "<<endl;
     selctionSort(arr);
    printArray(arr);
}