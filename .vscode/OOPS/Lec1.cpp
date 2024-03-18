#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student{
    private:
    string gf;
    public:
    int id;
    int age;
    string name;
    int nos;
    int present;
    //for dctor
    int *v;
    //constructor:Default constructor: assigns garbage value
    //khohla student
    Student(){
        cout<<"student constructor is called"<<endl;
    }
    //parametrized constructor
    Student(string _name,int _age,int _id,int _nos,int _present,string _gf){
        name=_name;
        age=_age;
         id=_id;
        present=_present;
        nos=_nos;
        gf=_gf;
        cout<<"student parameterized constructor is called"<<endl;
    }
    //parametrized constructor
    Student(string _name,int _age,int _id,int _nos,int _present){
        name=_name;
        age=_age;
         id=_id;
        present=_present;
        nos=_nos;
        cout<<"student parameterized constructor w/o gf is  called"<<endl;
    }
    //copy constructor
    //const likhna ek good practise
    Student(const Student&srcobj){ // by refrance ishliye liya kyo ki yha value copy nhi leni already niche copy horahi hain
    // or const ishliye bhi likha bcz yha koi bhi data ko cahnge nhi kar apyenge
    // like srcobj.gf=" radha";can't change
        this->name=srcobj.name;
        this->age=srcobj.age;
        this->id=srcobj.id;
        this->present=srcobj.present;
       this->nos=srcobj.nos;
       // for dctor
       this->v=srcobj.v;
        cout<<"student copy constructor is  called"<<endl;
    }
    //destructor 
    ~Student(){
        cout<<"student destructor is  called"<<endl;
        delete v;
    }
    // getter setter method
    string getGfName(){
        return gf;
        //return this->gf;both same
    }
    void setGfName(string gf){
       this->gf=gf;
        //return this->gf;both same
    }
    void Sleep(){
        cout<<"sleeping"<<endl;
    }
    void Study(){
        cout<<"Studys"<<endl;
    }
    void Attend(){
        cout<<"attendence"<<endl;
    }
    private:
    void gfChatting(){
        cout<<"girlfriend chattings"<<endl;
    }
};

int main(){
    // Student s1("hansu",20,22,0,4,"kriti");
    // cout<<s1.age<<endl;
    // cout<<s1.name<<endl;
    //  Student s2("kundan",21,30,1,5,"vanshika");
    // cout<<s2.age<<endl;
    // //alocate on heap
    // Student *s3=new Student("vimal",21,63,1,3);
    // cout<<(*s3).name<<endl;
    //  cout<<(*s3).age<<endl;
     //copy constructor
    //  Student s5;//this is called default ctor
    //  Student s4("kundan",21,30,1,5,"vanshika");
     //constructor tabhi call hota hain jab vo obj ban raha ho ham student s1; fir s1=s2 nhi kar sakte
     //ishi tarah copy constructor bhi counstructor//obj ban raha ho: ke time call hota hain
     //Student s5=s4;
    //  Student s5(s4);//other way
    //  cout<<s4.name<<endl;
    //  cout<<s5.name<<endl;
     // constructor destructor or copy constructor ka return type nhi hota
     //destructor
    //  {
    //  Student t1("kundan",21,30,1,5,"vanshika");
    //  cout<<t1.name<<endl;
    //  }
    //  Student t2;
     // getter setter method
     Student t3("kundan",21,30,1,5,"vanshika");
     //cout<<t3.gf<<endl;
     cout<<t3.getGfName()<<endl;
     t3.setGfName("Aditi");
      cout<<t3.getGfName()<<endl;



}