#include<iostream>
using namespace std;
int main(){
    int pocketMoney=5000;
    for(int date=0;date<35;date++){
        if(date%2==0){
        continue;
        }
        pocketMoney=pocketMoney-500;
        if(pocketMoney==0){
            break;
        }
    
        cout<<"you can go today"<<endl;
        return 0;
    }
}
