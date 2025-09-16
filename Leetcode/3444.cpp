#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {1, 2, 3};
    vector<int> target = {4};

    sort(target.begin(), target.end(), greater<int>());

    int ans = 0;
    for (int i = 0; i < target.size(); i++)
    {
        int mini = INT8_MIN;
        int idx = -1;
        for (int j = 0; j < nums.size(); j++)
        {
            int rem = nums[j] % target[i];
            if (rem == 0)
            {
                mini = 0;
                break;
            }

            else if (target[i] && rem > mini)
            {
                mini = target[i] - rem;
                idx = i;
            }
        }
        nums[idx] += mini;
        ans += mini;
    }

    cout << ans;

    return 0;
}
