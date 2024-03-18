#include <iostream>
#include <vector>
using namespace std;
int findPivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int s = 0;
    int e = n - 1;
   
    while (s <= e)
    {
         int mid = s + (e - s) / 2;
        if (s == e)
        {
            return s;
        }
        else if (mid + 1 < n && nums[mid + 1] < nums[mid])
        {
            return mid;
        }
        // condition lagana bhaiya bhul gaye the mere bhai
        else if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }

        else if (nums[s] > nums[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        // int mid = s + (e - s) / 2;
    }
    return -1;
}
int binarySearch(vector<int> &nums, int s, int e, int target)
{
    while (s <= e)
    {
         int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    int pivotIndex = findPivotIndex(nums);
    int n = nums.size();
    int ans = -1;

    if (target >= nums[0] && target <= nums[pivotIndex])
    {
        ans = binarySearch(nums, 0, pivotIndex, target);
    }
    else
    {
        ans = binarySearch(nums, pivotIndex + 1, n - 1, target);
    }
    return ans;
}
int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    int target=10;
    int result = search(v,target);
    if(result !=-1){
        cout << "target : " <<target<<" found at possition "<< result << endl;
    }
    else{
        cout << "target : " <<target<<" not found in the array " << endl;
    }
    return 0;
    }
    