#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for " << i << " :" << endl;
        cin >> arr[i];
    }
    cout << "printing after input :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "doubles : "<<endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }
    cout << "printing after taking input :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}