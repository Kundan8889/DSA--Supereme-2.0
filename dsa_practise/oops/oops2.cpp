#include<iostream>
using namespace std;
class animal{
    // state
    public:
    int age;
    int weight;
    // behaviour
    void sleep(){
         cout<<" Dog is sleeping "<<endl;
    }
    void eat(){
        cout<<" Dog is eating "<<endl;
    }
};
int main(){
    // object creation
    animal a1;
    cout<<a1.age<<endl;
   a1.sleep();
return 0;
}