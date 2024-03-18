/* find last occurence character*/
#include <iostream>
using namespace std;
void findLastOccuRTL(string &s, char x, int index, int &ans)
{
    // Base Case
    if (index <0)
    {
        return;
    }
    // processing-->Ek case solution
    if (s[index] == x)
    {
        ans = index;
        return;
    }
    // recursive call
    findLastOccuRTL(s, x, index -1, ans);
}
int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    char x;
    cout << "Enter the last occurence of character" << endl;
    cin >> x;
    int ans = -1;
    int index = 0;
    findLastOccuRTL(s, x, s.size()-1, ans);
    cout << ans << endl;
}