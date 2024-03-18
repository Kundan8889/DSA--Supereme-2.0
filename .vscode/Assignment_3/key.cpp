//key ya two sum
//we solved this problem by to pointer approach
#include<iostream>
#include<sort>
using namespace std;
bool keyPair(int arr[],int n,int X){
   int l=0;
   int m=n-1;
   int sum=0;
   while (l<=m)
   {
    int sum=arr[l]+arr[m];
    if(sum==X){
        return true;
    }
    else if(sum>X){
        m--;
    }
    else if(sum<X){
        l++;
    }
   }
   return false;
   
}

int main(){
int arr[]={1, 4, 45, 6, 10, 8};
int n=6;
int X=16;
short
cout<<"printing the arry "<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

cout<<endl;
bool b=keyPair(arr,n,X);
cout<<"Key Pair-> "<<b<<endl;

}