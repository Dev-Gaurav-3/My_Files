#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {5, 3, 3};
    long long curr = nums.back();
    long long final_ans = curr;

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] <= curr)
        {
            curr += nums[i];
        }
        else
        {
            curr = nums[i];
        }
        final_ans = max(final_ans, curr);
    }

    cout << final_ans;
    return 0;
}
