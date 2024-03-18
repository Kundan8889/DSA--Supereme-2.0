//multiple inheritance
#include<iostream>
using namespace std;
class Person{
    public:
    void walk(){
        cout<<"walking..."<<endl;
    }
};
class Teacher:virtual Person{
    public:
    void Teach(){
        cout<<"Teaching..."<<endl;
    }
};
class Researcher:virtual public Person{
    public:
    void research(){
        cout<<"Researching..."<<endl;
    }
};
class Professor:virtual public Person
{
    public:
    void boar(){
        cout<<"boaring..."<<endl;
    }
};

int main(){
Professor p;
//Diamond problem
//we use scope resolution operator
// p.Teacher::walk();
// p.Researcher::walk();
//we use virtual
p.walk();

}