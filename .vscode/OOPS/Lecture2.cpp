//inheritance
#include<iostream>
using namespace std;
class Bird{
    public:
    int weight;
    int age;
    int nol;//nol==>no. of leggs
    string color;
    void eat(){
        cout<<"eats"<<endl;
    }
     void fly(){
        cout<<"flys"<<endl;
    }
};
//sparrow==>goreiyya
class Sparrow:public Bird{  //java me ham extends karke likhte the yha par aese
    public:
     Sparrow(int age,int weight,string color,int nol){
        this->age=age;
        this->weight=weight;
        this->color=color;
         this->nol=nol;
    }
    void grassing(){
        cout<<"grassings "<<endl;
    }
};
//peigon==>kabutar
class Peigon:public Bird{ 
    public:
    void guttering(){
        cout<<"peigon is guttering"<<endl;
    }
};
int main(){
Sparrow s(2,3,"brown",4);
cout<<s.age<<endl;

}