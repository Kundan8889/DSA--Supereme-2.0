#include <iostream>
using namespace std;
int main()
{
    // int arr[7];
    // // cout<<arr<<endl;
    // //  cout<<&arr<<endl;
    // int n;
    // cin>>n;
    // int arr[]={4,5,6,7,8};
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"\t";
    // }
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
        return 0;
    }