#include <iostream>
using namespace std;
    bool searchArray(int arr[], int size, int target, int index)
    {
        // Base case
        if (index >= size)
        {
            return false;
        }
        if (arr[index] == target)
        {
            return true;
        }
         // recursive call
        bool aageKaAns = searchArray(arr, size, target, index+1);
        return aageKaAns;
    }
    int main()
    {
        int arr[] = {10, 20, 30, 40, 50};
        int size = 5;
        int index = 0;
        int target = 25;
        bool ans = searchArray(arr, size, target,index);
        cout<<"target found or not :"<<ans<<endl;
    }
