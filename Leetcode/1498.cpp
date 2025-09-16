#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {3, 5, 6, 7};
    int target = 9;
    sort(nums.begin(), nums.end());
    int ans = 0;
    int i = 0;
    int j = nums.size() - 1;

    while (i < j)
    {
        int a = nums[i];
        if (nums[j] + nums[i] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
