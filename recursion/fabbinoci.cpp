/* recursion==> 1. Base case mandotory hain 2. Recursion call mandotory hain.3 prossesing option */
#include <iostream>
using namespace std;
int fab(int n)
{
    //Base Case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    // processing
    // recursion relation
    int fabDiff = fab(n - 1)+fab(n-2);
    // processing
    return fabDiff;
}
int sum(int n)
{
    //Base case
    if(n==1)
    {
        return 1;
    }
     // recursion relation
    int ans =n+sum(n-1);
    return ans;
    
}
int main()
{
//   cout<<fab(n)<<endl;
cout<<sum(4)<<endl;
    return 0;
}