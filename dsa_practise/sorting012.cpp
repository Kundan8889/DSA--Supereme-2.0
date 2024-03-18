#include<iostream>
using namespace std;
void sorting(int arr[],int size){
     int left=0;
     int right=size-1;
     int index=0;
  while(index<=right){
    if(arr[index]==0){
    swap(arr[index],arr[left]);
    index++;
    left++;
    }
 else if(arr[index]==2){
    swap(arr[index],arr[right]);
    right--;
  }
  else{
    index++;
  }
}
};
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    cout<<"\n";
};

int main(){
    int arr[]={0,1,1,2,2,0,1,2,0};
    int size=9;
    cout<<"printing before sorted"<<" "<<endl;
    printArr(arr,size);
     cout<<"printing after sorted"<<" "<<endl;
     sorting(arr,size);
     printArr(arr,size);
    return 0;
}