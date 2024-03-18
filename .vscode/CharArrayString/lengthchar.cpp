#include<iostream>
#include<string.h>
using namespace std;
int findLength(char ch[],int n){
    int length=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}
int main(){
    char ch[100];
    cout<<"Enter the character value : "<<endl;
    //or agar hame space bhi count karni hain to ham cin.get(ch,100);use karenge
    //cin>>ch;
    cin.get(ch,100);
    int len= findLength(ch,100);
    cout<<"Total lenght : "<<len<<endl;
    // string .h header file include karni padegi hame
    cout<<"or character langth : "<<strlen(ch)<<endl;

}