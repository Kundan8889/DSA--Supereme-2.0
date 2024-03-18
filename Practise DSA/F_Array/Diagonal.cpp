#include <iostream>
using namespace std;
void printDiagonal(int arr[][3], int col, int row)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + arr[i][i];
    }
    cout << "Diagonal sum : " << sum << endl;
}
int printRevDiagonal(int arr[][3], int col, int row)
{

    int sum = 0;
    int n = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j==n - i - 1)
            {
                sum = sum + arr[i][j];
            }
        }
    }
     cout << " reverse diagonal of  sum : " << sum << endl;
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {2, 4, 6},
        {3, 3, 4}};
    int col = 3;
    int row = 3;
    cout << "print sum of Diagonal : " << endl;
    printDiagonal(arr, col, row);
    cout << "print sum of  reverse diagonal : " << endl;
    printRevDiagonal(arr, col, row);

    return 0;
}