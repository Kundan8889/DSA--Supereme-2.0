#include<iostream>
using namespace std;
void lowToUpperCase(char ch[],int n){
   int index=0;
    while (ch[index]!='\0')
    {
        char currCharacter=ch[index];
        if(currCharacter>='a'&&currCharacter<='z'){
            ch[index]=currCharacter-'a'+'A';
        }
        index++;
    }
    
}
int main(){
    char ch[100];
    cout<<"Enter the character : "<<endl;
    cin.getline(ch,100);
    cout<<"Befor : "<<endl;
    lowToUpperCase(ch,100);
    cout<<"after : "<<ch<<endl;
}