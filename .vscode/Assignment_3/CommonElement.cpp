#include <iostream>
#include <vector>
#include<set>
using namespace std;
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> ans;
    set<int>st;
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            //ans.push_back(A[i]);
            //agar ham set stl use nhi karte to multiple time me ans correct nhi hota like agar 3 array me row or colum 3 element ho to reeatedly value aaye or ans galat hojaye ga thats it bro
            st.insert(A[i]);
            i++, j++, k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for(auto i:st){  //yha par auto ek keyword hain in c++ 
            ans.push_back(i);
        }
    return ans;
}
int main()
{
    int A[] = {1, 5, 10, 20, 40, 80};
    int n1 = 6;
    int B[] = {6, 7, 20, 80, 100};
    int n2 = 5;
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n3 = 8;
    vector<int> ansSorted = commonElements(A, B, C, n1, n2, n3);
    cout << "Here the common Element : " << endl;
    for (int i : ansSorted)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}