#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {1, 5, 3};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int ele = nums[n - 1];
    int op = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] != ele)
        {
            op += n - i - 1;
            ele = nums[i];
        }
    }

    cout << op;

    return 0;
}
