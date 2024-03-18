 #include<iostream>
 using namespace std;
 bool primeNum(int n){
for(int i=2;i<=n;i++){
    if(n%i==0){
        return false;
    }
    return true;
}
 }
 int main(){
    int primeN=primeNum(2);
    if(primeN){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }
 }