#include<iostream>
using namespace std;
class Student{
     private:
     string gf;
    public:
    int id;
    string name;
    int age;
    int rollNo;
    bool present;
    int nos;
    // defoult constructor
    Student(){
    cout<<"student ctor is called "<<endl;
    }
    // parameteried constructor
     Student(string name,int id,int rollNo, int age,bool present,int nos,string gf){
        this->id=id;
        this->name=name;
        this->age=age;
        this->rollNo=rollNo;
        this->present=present;
        this->nos=nos;
        this->gf=gf;
    cout<<"student parameteried ctor is called "<<endl;
    }
      Student(string name,int id,int rollNo, int age,bool present,int nos){
        this->id=id;
        this->name=name;
        this->age=age;
        this->rollNo=rollNo;
        this->present=present;
        this->nos=nos;
        cout<<"student parameterized constructor w/o gf is  called"<<endl;
    }
    void study(){
        cout<<"studies "<<endl;
    }
    void sleep(){
        cout<<"sleeping "<<endl;
    }
    void walk(){
        cout<<"student is woking "<<endl;
    }
    private:
    void gfChating(){
        cout<<"my girlfriend chating "<<endl;
    }
   
};
int main(){
Student s1;
Student s2("kundan",30,30,23,true,69,"vanshika");
// Student s3("kundan",30,30,23,true,69);
cout<<s2.name<<endl;
Student *s4=new Student("vikas",30,30,23,true,69);
cout<<s4->name<<endl;
// derefrence karna padega
cout<<(*s4).name<<endl;
}