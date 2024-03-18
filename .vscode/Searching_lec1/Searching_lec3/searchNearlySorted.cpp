#include <iostream>
using namespace std;
int searchNearlySorted(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;    
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid-1>=0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid+1<n && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] < target)
        {
            s= mid + 2;
        }
        else
        {
            e= mid - 2;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {20, 10, 30, 50, 40, 70, 80};
    int n = 7;
    int target = 40;
    int  targetIndex = searchNearlySorted(arr, n, target);
    //cout << "Here NearlySorted  array is : " << found << endl;
    if(targetIndex==-1){
        cout<<"Not found  "<<endl;
    }
    else{
        cout<<"Element found at Index : "<<targetIndex<<endl;
    }
}