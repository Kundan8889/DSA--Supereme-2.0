// decimal to binary
#include <iostream>
#include <math.h>
using namespace std;
//division method
int decimalTobinary(int n)
{
    int i = 0;
    int ans = 0;
    while (n > 0)
    {
        int bit = n % 2;
        ans = bit * pow(10, i++) + ans;
        n = n / 2;
    }
    return ans;
}
//Bitwise method 
int decimalTobinary1(int n)
{
    int i = 0;
    int ans = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        ans = bit * pow(2, i) + ans;
        n = n>>1;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the decimal number : ";
    cin >> n;
    int binary = decimalTobinary1(n);
    cout << binary << endl;
}