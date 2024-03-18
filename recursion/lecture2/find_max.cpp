#include<iostream>
#include<limits.h>
using namespace std;
void findMax(int arr[],int n,int index,int &maxi){
//Base case
if(index>=n){
    return;
}
 maxi=max(maxi,arr[index]);
 //recursive call
 findMax(arr,n,index+1,maxi);

}
int main(){
    int arr[]={11,20,34,5,7,88,96};
    int n=7;
    int index=0;
    int maxi=INT_MIN;
    findMax(arr,n,index,maxi);
    cout<<"maximum no. of in array is : "<<maxi<<endl;
}