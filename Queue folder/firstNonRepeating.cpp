#include <iostream>
#include <queue>
using namespace std;
void firstNonRepeating(int freq[],string str){
queue<char> q;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // it means a character ko 0 index se map karvadiya aese hi  and b=1,c=2,d=3 ko map karwa diya
        freq[ch - 'a']++;
        q.push(ch);
        //  answer find karo
        while (!q.empty())
        {
            char frontCharacter = q.front();
            if (freq[frontCharacter - 'a'] > 1)
            {
                // this is not answer
                q.pop();
            }

            else
            {
                // ==1 wala case
                // yhi answer hain
                cout << frontCharacter << "->";
                break;
            }
        }
        if (q.empty())
        {
            // koi answer nhi nikla
            cout << "#" << "->";
        }
    }
}
int main()
{
    queue<char>q;
    string str = "ababc";
    int freq[26] = {};
    firstNonRepeating(freq,str);
    return 0;
}