#include <iostream>
#include<vector>
using namespace std;
void printDigits(int num,vector<int>&ans)
{
    // Base Case
    if (num == 0)
    {
        return;
    }
    // processing
    int digit = num % 10;
// update num
  num = num / 10;
// recursive call
  printDigits(num,ans);
//processing
ans.push_back(digit);
}

int main()
{
    int num = 4217;
    vector<int>ans;
    printDigits(num,ans);
    for(int num:ans){
        cout<<num<<" ";
    }
    return 0;
}
/* or */
// #include <iostream>
// using namespace std;
// void printDigits(int num)
// {
//     // Base Case
//     if (num == 0)
//     {
//         return;
//     }
//     // processing
//     int digit = num % 10;
// // update num
//   num = num / 10;
// // recursive call
//   printDigits(num);
// //processing
// cout << digit << " ";
// }

// int main()
// {
//     int num = 4217;
//     printDigits(num);
//     return 0;
// }