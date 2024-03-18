/* recursion==> 1. Base case mandotory hain 2. Recursion call mandotory hain.3 prossesing option */
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 1;
    // processing
    // recursion relation
    int recursionKaAns = factorial(n - 1);
    // processing
    int finalAns = n * recursionKaAns;
    return finalAns;
}
void print(int n)
{
    if (n == 1)
    {
        cout << 1 << " " << endl;
        return;
    }
    // processing
    cout << n << " ";
    // recursion relation
    print(n - 1); //==>this is head recursion
}
void print1(int n)
{
    // Base case
    if (n == 1)
    {
        cout << 1 <<" " ;
        return;
    }
    // recursion relation
    print1(n - 1); //==>this is tail recursion
                  // processing
    cout << n<<" " ;
}
//power
int pow(int n)
{
    //Base case
    if(n==0){
        return 1;
    }
    //recursion relation
    int ans= 2*pow(n-1);
    return ans;
}
int main()
{
    int n = 10;
    // int ans = factorial(n);
    // cout << "factorial of " << n << " is: " << ans << endl;
   // print1(n);
   cout<<pow(n)<<" ";
    return 0;
}