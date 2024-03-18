#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "CapaCity->" << v.capacity() << endl;
    v.push_back(1);
    cout << "CapaCity->" << v.capacity() << endl;
    v.push_back(2);
    cout << "CapaCity->" << v.capacity() << endl;
    v.push_back(3);
    cout << "CapaCity->" << v.capacity() << endl;
    // v.push_back(5);
    cout << "Size->" << v.size() << endl;
    cout << "Element at 2nd Index " << v.at(1) << endl;
    cout << " front " << v.front() << endl;
    cout << " back " << v.back() << endl;
    cout << " Before pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    v.pop_back();
    cout << endl;
    cout << " after pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout<<endl;
    cout << " Before clear " <<v.size()<< endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    v.clear();

}