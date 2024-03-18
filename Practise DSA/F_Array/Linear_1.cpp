// linear data struture
// #include<iostream>
// using namespace std;
// bool linearArr(int arr[],int n,int target){
//     // 1-->found
//     // 0-->Not found
//     bool flag=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             flag=1;
//             break;
//         }
//     }

//     return flag;
// }
//  void printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<endl;
//  }
// int main(){
// int arr[]={10,20,30,40,50};
// int n=5;
// int target=10;
// bool ans=linearArr(arr,n,target);
// if(ans==1){
//     cout<<" target found "<<endl;
// }
// else{
//     cout<<" target not found "<<endl;
// }
// }
#include <iostream>
using namespace std;
bool cheackTarget(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 500;
    bool ans = cheackTarget(arr, size, target);
    if (ans==1)
    {
        cout << " target found " << endl;
    }
    else
    {
        cout << " target not found " << endl;
    }
    return 0;
}