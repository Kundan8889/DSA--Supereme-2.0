#include<iostream>
using namespace std;
int main(){
    int num = 8;
    cout << "Enter the number of size : " << endl;
    cin>>num;
     int n=num/2;
    //full pyramid
    for (int row = 0; row <=n; row++)
    {
        for (int col = 0; col <=n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    //inverted pyramid
    for (int row = 0; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout <<" ";
        }
        for (int col = n; col >= row; col--)
        {
            cout <<"* ";
        }
        cout << endl;
    }
    
}