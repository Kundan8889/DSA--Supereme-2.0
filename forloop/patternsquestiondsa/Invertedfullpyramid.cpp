#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cout << "Enter the number of size : " << endl;
    cin>>n;
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << " ";
        }
        for (int col = n; col >= row; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
