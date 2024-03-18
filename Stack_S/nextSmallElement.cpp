#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> nextSmallElement(int *arr, int size, vector<int> &ans)
{
    stack<int> st;
    st.push(-1);
    for (int i = size - 1; i >= 0; i--)
    {
        int curr = arr[i];
        // ans find karo current ke liye
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}
int main()
{
    int arr[] = {8, 4, 6, 2, 3};
    int size = 5;
    vector<int> ans(size);
    ans = nextSmallElement(arr, size, ans);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
