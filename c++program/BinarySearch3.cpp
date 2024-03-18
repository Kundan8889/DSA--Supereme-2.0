//find the first and last index of the given array
#include <iostream>
using namespace std;
int firstoccurences(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
        
    }
    return ans;
}
int lastoccurences(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int even[6] = {1, 3, 3, 4, 5, 7};
    int index=firstoccurences(even,6,3);
    int index1=lastoccurences(even,6,3);
    cout<<"first occurences of 3 is at index : "<<index<<endl;
    cout<<"Last occurences of 3 is at index : "<<index1;
}