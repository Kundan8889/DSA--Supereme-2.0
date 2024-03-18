// binary to decimal
#include <iostream>
#include <math.h>
using namespace std;
// division method
int binaryTodecimal(int n)
{
    int i = 0;
    int decimalno = 0;
    while (n)
    {
        int bit = n % 10;
        decimalno = decimalno + bit * pow(2, i++);
        n /= 10;
    }
    return decimalno;
}
// bitwise method
int binaryTodecimal2(int n)
{
    int i = 0;
    int decimalno = 0;
    while (n)
    {
        int bit = (n & 1);
        decimalno = decimalno + bit * pow(2, i++);
        n = n >> 1;
    }
    return decimalno;
}
int main()
{
    int binaryno;
    cout << "Enter the decimal number";
    cin >> binaryno;
    int decimal = binaryTodecimal2(binaryno);
    cout << decimal << endl;
}
