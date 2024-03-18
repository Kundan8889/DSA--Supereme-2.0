#include <iostream>
using namespace std;
void leftShifTorigthShift(int arr[], int n)
{
    int index=0;
    int left=0;
    int right=n-1;
    while(index<=right){
        if(arr[index]==0){
            swap(arr[index],arr[left]);
            index++;
            left++;
        }
         else if(arr[index]==2){
            swap(arr[index],arr[right]);
            right--;
        }
        else{
            index++;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 0, 2, 0, 2, 0, 1, 0, 2};
    int n = 10;
    leftShifTorigthShift(arr,n);
    cout << "printing the array : " << endl;
    for (int index = 0; index < n; index++)
    {
        cout << arr[index] << " ";
    }
}