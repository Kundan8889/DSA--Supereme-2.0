#include<iostream>
using namespace std;
// void printMax(int num1,int num2,int num3){
    // if(num1>=num2&&num1>=num3){
    //      cout<<num1<<" is greatest "<<"\n"<<endl;
    // }
    // else if(num2>=num1&&num2>=num3){
    //      cout<<num2<<" is greatest "<<"\n"<<endl;
    // }
    // else{
    //     cout<<num3<<" is greatest "<<"\n"<<endl;
    // }
    //find maximum number
    void printMax(int n1,int n2,int n3){
    int ans1=max(n1,n2);
    int finalAns=max(ans1,n3);
    cout<<"final ans is: "<<finalAns<<endl;

}
int main(){
    printMax(32,320,7);
}