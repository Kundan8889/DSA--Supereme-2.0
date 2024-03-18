#include<iostream>
using namespace std;
class Vector{
    public:
    int x,y;
    //method:1
    // Vector(int x,int y){
    //     // this->x=x;
    //     // this->y=y;
    // }
    //method:2
    Vector(int x,int y):x(x),y(y){

    }
    //op overloading
    // void operator+(const Vector&src){
    //     //this would point to v1
    //     //this would point to v2
    //     this->x=this->x+src.x;
    //     this->y=this->y+src.y;
    //ya
    // this->x+=src.x;
       // this+>y-=src.y;

    // }
    //  void operator-(const Vector&src){
    //     //this would point to v1
    //     //this would point to v2
    //     // this->x=this->x-src.x;
    //     // this->y=this->y-src.y;
    //     this->x-=src.x;
    //     this->y-=src.y;
    void operator++(){
        //this would point to v1
        //this would point to v2
        // this->x=this->x-src.x;
        // this->y=this->y-src.y;
        this->x=x++;
        this->y=y++;

    }
    void Display(){
        cout<<"x:"<<x<<endl;
        cout<<"y:"<<y<<endl;
        }
};
int main(){
    Vector v1(2,3);
    Vector v2(4,5);
    ++v1;
    ++v2;
    v1.Display();

}