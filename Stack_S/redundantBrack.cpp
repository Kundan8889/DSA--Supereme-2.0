#include<iostream>
#include<stack>
using namespace std;
bool cheakRedundant(string&str){
stack<char>st;
for(int i=0;i<str.length();i++){
    char ch=str[i];
    if(ch=='('||ch=='+'||ch=='-'||ch=='/'||ch=='*'){
        st.push(ch);
    }
    else{
        // close bracket found
        if(ch==')'){
            int operatorCount=0;
            while(!st.empty()&&st.top()!='('){
                char temp=st.top();
                if(temp=='('||temp=='+'||temp=='-'||temp=='/'||temp=='*'){
                   operatorCount++;
                }
                // operator ko pop kardo
                st.pop();
            }
            // yha pr pahuche ishka matlab open bracket mil gyi at top
            st.pop();
        if(operatorCount==0){
            return true;
        }
        }
    }
}
return false;
}

int main(){
string str="((a+b)*(c+d)))";
bool ans=cheakRedundant(str);
if(ans==true){
cout<<"Redundant Brackets Present"<<endl;
}
else{
cout<<"Redundant Brackets not Present"<<endl;
}
}