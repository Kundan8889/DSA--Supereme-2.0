// dearranging karna hain
#include <iostream>
#include <vector>
using namespace std;
int solve(int n)
{
    // yha n==1,2 ,2 case ==> n-1 or n-2 ko handle karne ke liye likha hain
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    // pehle me solve kar raha tha n block ke liye to mera fun f(n) tha
    // to ab me n-2 ke liye sove kar raha hun to  mera f(n-2) hoga
    // n ke liye (n-1) position hain
    int ans = (n - 1) * (solve(n - 2) + solve(n - 1));
    return ans;
}
int main()
{
    int n = 4;
    cout << solve(n) << endl;
}