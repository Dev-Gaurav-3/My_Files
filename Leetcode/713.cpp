#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {10, 5, 2, 6};
    int k = 100;
    int ans = 0;
    for (int i : nums)
    {
        if (i < k)
            ans++;
    }
    int j = 1;
    for (int i = 0; i < nums.size() - j; i++)
    {
        int product = 1;
        for (int a = 0; a <= j; a++)
        {
            product *= nums[a];
        }

        for (int a = j + 1; a < nums.size() - j)
    }

    return 0;
}
