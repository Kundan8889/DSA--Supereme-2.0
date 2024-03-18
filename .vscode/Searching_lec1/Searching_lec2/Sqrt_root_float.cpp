#include <iostream>
using namespace std;
//Output in integer
float findsqrtRoot(float x)
{
    float s = 0;
    float e = x;
    float ans = -1;
    while (s <= e)
    {
        float mid = s + (e - s) / 2;
        float square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            ans = mid;
            s = mid + 0.000001;
        }
        else if (square > x)
        {
            e = mid - 0.000001;
        }
    }
    return ans;
}
// output in double 
double findsqrtRoot1(double x)
{
    double s = 0;
    double e = x;
    double ans = -1;
    while (s <= e)
    {
        double mid = s + (e - s) / 2;
        double square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            ans = mid;
            s = mid + 0.000001;
        }
        else if (square > x)
        {
            e = mid - 0.000001;
        }
    }
    return ans;
}
int main()
{
    double x = 68;
    // float ans= findsqrtRoot(x);
    double ans1 = findsqrtRoot1(x);
    cout << "sqrt root of " << x << " is : " << ans1 << endl;
    return 0;
}