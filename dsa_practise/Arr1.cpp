#include<iostream>
#include<limits.h>
using namespace std;
// int findMinArray(int arr[],int size){
//     int miniNum=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<miniNum){
//             miniNum=arr[i];
//         }
//     }
//     return miniNum;
// }
// int findMaxArray(int arr[],int size){
//     int maxNum=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxNum){
//             maxNum=arr[i];
//         }
//     }
//     return maxNum;
// }
int findMinArray(int arr[],int size){
    int miniNum=INT_MAX;
    for(int i=0;i<size;i++){
        miniNum=min(miniNum,arr[i]);
    }
    return miniNum;
}
int findMaxArray(int arr[],int size){
    int maxNum=INT_MIN;
    for(int i=0;i<size;i++){
       maxNum=max(maxNum,arr[i]);
    }
    return maxNum;
}
int main(){
int arr[]={2,3,4,35,6,3};
int size=6;
int miniAns=findMinArray(arr,size);
int maxAns=findMaxArray(arr,size);
cout<<"minimum num of array : "<<miniAns<<endl;;
cout<<"maxmum num of array : "<<maxAns;
return 0;
}