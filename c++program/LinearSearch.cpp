// Linear Search:search element  in array
#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {3, 5, 2, 7, -45, 33, 6, 1, 4, 0};
    int key;
    cout << "Enter to search of key in given array : ";
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "\nPresent key\n";
    }
    else
    {
        cout << "\n Absent key\n";
    }
    return 0;
}