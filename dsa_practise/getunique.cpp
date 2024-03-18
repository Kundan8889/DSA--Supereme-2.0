#include<iostream>
using namespace std;
int getUnique(int *arr,int n){
int ans=0;
for(int i=0;i<n;i++){
ans=ans^arr[i];
}
return ans;
}
int main(){
int arr[]={10,20,30,10,20,40,50,50,30};
int size=9;
int finalans =getUnique(arr,size);
cout<<"Unique value : "<<finalans<<endl;
return 0;
}