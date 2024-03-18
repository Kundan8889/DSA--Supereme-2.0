#include<iostream>
using namespace std;
 void printPermutation(string &str,int index){  
// string &str ishe ham pass by refrance ya by refrence kehte hain to by rafrence karne se orignal string me bhi change hota hain
// or string str -->ishme value copy horahi hain
    //base case
    if(index>=str.length()){
        cout<<str<<" ";
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        //recursion bhaiya
        printPermutation(str,index+1);
        // backtracking
        swap(str[index],str[i]);
       // Note: backtracking is simple recursion bas recursive call se vapas aate huve hame kuch additional operational performe karne hote hain bro

    }
 }
int main(){
    string str="abc";
    int index=0;
    printPermutation(str,index);
}