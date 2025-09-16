#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {3, 1, 4, 2};
    int p = 6;
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        sum += nums[i];
    }

    if (sum % p == 0)
        return 0;

    return 0;
}
