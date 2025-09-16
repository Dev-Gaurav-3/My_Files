#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {2, 1, 4};
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0 && nums[i + 1] % 2 != 0)
        {
            continue;
        }
        else if (nums[i] % 2 != 0 && nums[i + 1] % 2 == 0)
        {
            continue;
        }
        else
        {
            return false;
        }
    }

    return 0;
}
