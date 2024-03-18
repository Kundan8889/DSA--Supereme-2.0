// PaintWays
#include <iostream>
#include <vector>
using namespace std;
int getPaintWays(int n,int k)
{
   
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return k+k*(k-1);
    }

    int ans = (n - 1) * (getPaintWays(n - 2,k) + getPaintWays(n - 1,k));
    return ans;
}
int main()
{
    int n = 3;
    int k=3;
    int ans=getPaintWays(n,k);
    cout << ans << endl;
}
