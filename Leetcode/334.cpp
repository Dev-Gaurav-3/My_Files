#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {2, 1, 5, 0, 4, 6};

    int min_1 = INT8_MAX;
    int min_2 = INT8_MAX;

    for (int i : nums)
    {
        if (i <= min_1)
        {
            min_1 = i;
        }
        else if (i <= min_2)
        {
            min_2 = i;
        }
        else
        {
            return true;
        }
    }

    return 0;
}
