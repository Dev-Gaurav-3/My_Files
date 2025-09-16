#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    int minLen = INT_MAX;

    for (int k = 1; k <= nums.size(); k++) // try all window sizes
    {
        int windsum = 0;
        for (int i = 0; i < k; i++) // initial window
        {
            windsum += nums[i];
        }
        if (windsum >= target)
            minLen = min(minLen, k);

        for (int i = k; i < nums.size(); i++) // sliding window
        {
            windsum += nums[i] - nums[i - k];
            if (windsum >= target)
                minLen = min(minLen, k);
        }
    }

    if (minLen == INT_MAX)
        cout << "No subarray found with sum >= " << target << endl;
    else
        cout << "Minimum length subarray with sum >= " << target << " is: " << minLen << endl;

    return 0;
}
