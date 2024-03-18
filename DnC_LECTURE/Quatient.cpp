#include<iostream>
#include<math.h>
using namespace std;
int GetQuatient(int divisor,int dividend){
    int s=0;
    int e=divisor;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor<dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int dividend=-49;
    int divisor=7;
    int ans=GetQuatient(abs(divisor),abs(dividend));
    if(divisor>0 && dividend<0 || divisor<0 && dividend>0){
        ans=0-ans;
    }
    cout<<"Final ans is :  "<<ans<<endl;
}