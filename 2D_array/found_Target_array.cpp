#include <iostream>
using namespace std;
bool findTargetArray(int arr[][5], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8,9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
        };
    int row = 4;
    int col = 5;
    int target = 2;

        cout << " found or not : " << findTargetArray(arr, row, col, target)<<endl;
}