#include<iostream>
using namespace std;
void ShiftNegativeoneside(int arr[],int n){
    //j-->memory block hain jha par ham nagative no. store kar sakte hain
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[]={10,-2,20,-3,5,-34,25};
    int n=7;
    ShiftNegativeoneside(arr,n);
    cout<<"printing the array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}