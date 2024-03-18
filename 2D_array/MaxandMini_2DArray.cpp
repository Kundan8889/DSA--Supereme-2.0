#include <iostream>
#include <limits.h>
using namespace std;
int findMax(int arr[][5], int row, int col)
{
    int max_Ans = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max_Ans)
            {
                max_Ans = arr[i][j];
            }
        }
    }
    return max_Ans;
}
int findMini(int arr[][5], int row, int col)
{
    int mini_Ans = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < mini_Ans)
            {
                mini_Ans = arr[i][j];
            }
        }
    }
    return mini_Ans;
}
int main()
{
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};
    int row = 4;
    int col = 5;
     cout << "Minimum no. of 2D Array : " << findMini(arr, row, col) << endl;
    cout << "Maximum no. of 2D Array : " << findMax(arr, row, col) << endl;
    
}