#include <iostream>
#include<vector>
using namespace std;
void findSubSequences(string str, string output, int index,vector<string>&ans)
{
    // Base case
    if (index >= str.length())
    {
        // ab jo hain vo output string me build ho chuka hain
        cout << "-->" << output << endl;
        return;
    }
    char ch = str[index];
    // recursive call
    //  exclude
    findSubSequences(str, output, index + 1,ans);
    // include
    output.push_back(ch);
    findSubSequences(str, output, index + 1,ans);
}
int main()
{
    string str = "abc";
    string output = "";
    int index = 0;
    vector<string>ans;
    cout<<"printing the subsequence in vector: "<<endl;
     findSubSequences(str, output, index,ans);
    for(string s:ans){
        cout<<"-->"<<s<<endl;
    }
}