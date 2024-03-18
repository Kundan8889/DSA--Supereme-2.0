#include <iostream>
using namespace std;
void findSubSequences(string str, string output, int index)
{
    // Base case
    if (index >= str.length())
    {
        // ab jo hain vo output string me build ho chuka hain
        cout << "-->" << output << endl;
        return;
    }
//     char ch = str[index];
//     // recursive call
//     //  exclude
//     findSubSequences(str, output, index + 1);
//     // include
//     output.push_back(ch);
//     findSubSequences(str, output, index + 1);
// }
/* ya pehle include than exclude to*/
 char ch = str[index];
 //include 
 output.push_back(ch);
 findSubSequences(str,output,index+1);
//exclude
output.pop_back();
 findSubSequences(str,output,index+1);
}
int main()
{
    string str = "abc";
    string output = "";
    int index = 0;
    findSubSequences(str, output, index);
}