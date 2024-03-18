// reverse string using stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
string str="Vanshika";
//becouse character me pop karenge to character me pop ho so:=>
stack<char>st;
for(int i=0;i<str.length();i++){
    //hmne har ek char ko nikal liya
    char ch=str[i];
    st.push(ch);
}
cout<<endl;
while(!st.empty()){
cout<<st.top();
st.pop();
}
cout<<endl;
}