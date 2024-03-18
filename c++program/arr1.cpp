#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "\nEnter the size : " <<endl;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "\nYou entered : ";
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }
    cout << endl;
    return 0;
}