#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers you want to add : "
         << "\n";
    cin >> n;
    int arr[100];
    cout << "Enter the numbers :"
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Doubles :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << 2*arr[i] << " ";
    }
}