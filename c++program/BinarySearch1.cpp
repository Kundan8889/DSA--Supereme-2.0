#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if (arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[9] = {1, 4, 8, 12, 14, 16, 21, 23, 25};
    int odd[7] = {2, 3, 8, 12, 14, 16, 21};
    int index=BinarySearch(even,9,21);
    int index1=BinarySearch(odd,7,14);
    cout<<"Index of 21 is : "<<index<<endl;
     cout<<"Index of 14 is : "<<index1<<endl;
}