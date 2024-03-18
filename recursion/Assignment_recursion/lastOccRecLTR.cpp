/* find last occurence character*/
#include <iostream>
using namespace std;
void findLastOccuLTR(string &s, char x, int index, int &ans)
{
    // Base Case
    if (index >= s.size())
    {
        return;
    }
    // processing-->Ek case solution
    if (s[index] == x)
    {
        ans = index;
    }
    // recursive call
    findLastOccuLTR(s, x, index + 1, ans);
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
    findLastOccuLTR(s, x, index, ans);
    cout << ans << endl;
}