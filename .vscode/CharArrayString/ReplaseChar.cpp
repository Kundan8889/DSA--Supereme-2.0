#include <iostream>
using namespace std;
void replaceCharacter(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char space = ' ';
        if (ch[index] == '@')
        {
            ch[index] = space;
        }

        index++;
    }
}
int main()
{
    char ch[100];
    cout << "Enter the character : " << endl;
    cin.getline(ch, 100);
    cout << "Befor : " << endl;
    replaceCharacter(ch, 100);
    cout << "after : " << ch << endl;
}