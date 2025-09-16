#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 10, 2019};
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int zeroes = 0;
        if (nums[i] == 0)
        {
            while (nums[i] == 0)
            {
                zeroes++;
                i++;
            }
        }
        ans += zeroes * (zeroes + 1) / 2;
    }
    cout << ans;

    return 0;
}
