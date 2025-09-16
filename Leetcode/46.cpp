#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> fun(vector<int> &nums, vector<vector<int>> &ans, int i)
{
    if (i == nums.size())
    {
        ans.push_back(nums);
    }
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i], nums[j]);
        fun(nums, ans, i + 1);
        swap(nums[i], nums[j]);
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    vector<vector<int>> ans;
    fun(nums, ans, 0);
    return 0;
}
