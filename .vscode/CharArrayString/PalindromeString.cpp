#include <iostream>
using namespace std;
int findLength(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}
bool findPalindrome(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[100];
    cout << "Enter the character : " << endl;
    cin.getline(ch, 100);
    int len = findLength(ch, 100);
    // cout << " length : " << len << endl;
    bool isPalindrome = findPalindrome(ch, len);
    if (isPalindrome)
    {
        cout << " palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome " << endl;
    }
    return 0;
}
