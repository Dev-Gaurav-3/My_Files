#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {-5, 1, 2, -3, 4};
    int k = 2;

    int size = k;
    int max_sum = INT16_MIN;
    while (size < nums.size())
    {
        int curr_sum = 0;
        for (int i = 0; i < size; i++)
        {
            curr_sum += nums[i];
        }
        max_sum = max(curr_sum, max_sum);
        for (int i = size; i < nums.size() - k; i++)
        {
            curr_sum += nums[i] - nums[i - k];
            max_sum = max(max_sum, curr_sum);
        }

        size += k;
    }

    cout << max_sum;

    return 0;
}
