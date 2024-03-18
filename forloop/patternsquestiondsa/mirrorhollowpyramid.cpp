#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number"<<endl;
    cin >> n;
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= n-row-1;col++)
        {
            cout<<" ";
        }
        for(int col=0;col<=row;col++){
            if(col==0||col==row){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;

    }
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= row;col++)
        {
            cout<<" ";
        }
        int totlecolm=n-row;
        for(int col=0;col<totlecolm;col++){
            if(col==0||col==totlecolm-1){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            // cout<<"* ";
        }
        cout<<endl;

    }
}