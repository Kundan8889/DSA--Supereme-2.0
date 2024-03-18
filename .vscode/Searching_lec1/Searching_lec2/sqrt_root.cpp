#include <iostream>
using namespace std;
int sqrtRoot(int x)
{
    int s = 0;
    int e = x;
    int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans=mid;
            s = mid + 1;
        }
        else if (mid * mid > x)
        {
            e = mid - 1;
        }
         mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int x = 68;
    int ansSqrt = sqrtRoot(x);
    cout << " sqrt root of " << x <<" is : "<<ansSqrt <<endl;
    return 0;
}