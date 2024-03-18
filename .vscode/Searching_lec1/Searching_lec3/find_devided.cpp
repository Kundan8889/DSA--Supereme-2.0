#include<iostream>
using namespace std;
  int divide(int dividend, int divisor) {
        int s=0;
        int e=abs(dividend);
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(abs(mid*divisor)==dividend){
                return mid;
            }
            else if(abs(mid*divisor)<dividend){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        if(ans<0){
            
            return -ans;
        }
        return ans;
    }
int GetQuatient(int divisor, int dividend){
    int s=0;
    int e=divisor;
    int ans =-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor<dividend){
            ans=mid;
            s=mid+1;
        }
        else if(mid*divisor>dividend){
            e=mid-1;
        }
    }
}
int main(){
    int divisor=7;
    int dividend=-49;
    int ans=GetQuatient(abs(divisor),abs(dividend));
    if(divisor>0 && dividend<0 || divisor<0 && dividend>0){
        ans=0-ans;
    }
    cout<<"Final ans is :  "<<ans<<endl;
}