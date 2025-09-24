#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {4, 3, 6, 16, 8, 2};
    sort(nums.begin(), nums.end());
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int curr = nums[i] * nums[i];
        int count = 0;
        while (true)
        {
            int val = lower_bound(nums.begin() + i, nums.end(), curr) - nums.begin();

            if (nums[val] == curr)
            {
                count++;
                curr = nums[val] * nums[val];
            }
            else
            {
                ans = max(count, ans);
                break;
            }
        }
    }
    cout << ans;

    return 0;
}
