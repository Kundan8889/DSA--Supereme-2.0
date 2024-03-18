// #include<iostream>
// using namespace std;
// void printNum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
// }
// int main(){
//     printNum(10);
// }
#include<iostream>
using namespace std;
void printNum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
         if(i%2==0){
          sum= sum+i;
         }
    }
         cout<<sum;
}
int main(){
    printNum(10);
}