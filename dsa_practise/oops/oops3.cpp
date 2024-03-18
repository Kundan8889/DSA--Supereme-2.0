#include<iostream>
using namespace std;
// getter and setter =>
class getset{
    // state
    private:
    int value=80;
    public:
    int age;
    int weight;
    // behaviour
   int getValue(){
    return value;
   }
   int setValue(int newvalue){
    value=newvalue;
   }
};
int main(){
    // object creation
getset a;
cout<<a.getValue()<<endl;
cout<<a.setValue(70)<<endl;
return 0;
}