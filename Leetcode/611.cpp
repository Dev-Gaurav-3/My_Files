#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {2, 5, 7, 8, 3, 4, 4};

    if (nums.size() < 3)
        return 0;

    sort(nums.begin(), nums.end());
    int ans = 0;

    for (int i = 0; i < nums.size() - 2; ++i)
    {
        for (int j = i + 1; j < nums.size() - 1; ++j)
        {
            int a = nums[i];
            int b = nums[j];

            int lb = lower_bound(nums.begin() + j + 1, nums.end(), a + b) - nums.begin();
            ans += lb - (j + 1);
        }
    }

    cout << ans << endl;
    return 0;
}
