#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 4};
    int k = 2;

    sort(nums.begin(), nums.end());
    set<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            int j = k - 1;
            for (;;)
            {
                if (nums[i] == nums[i - 1])
                {
                    ans.insert(nums[i] - j);
                    j--;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }
            }
        }
        else
        {
            ans.insert(nums[i] - k);
        }
    }

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
