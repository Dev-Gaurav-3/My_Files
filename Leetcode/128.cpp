#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{

    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

    if (nums.size() == 0)
        return 0;
    map<int, int> mp;
    for (int i : nums)
    {
        mp[i]++;
    }
    int max_ans = 1;
    int temp = 1;
    int count = mp.begin()->first;
    for (auto ele : mp)
    {
        if (count == ele.first)
        {
            continue;
        }
        else
        {
            if (++count == ele.first)
            {
                temp++;
            }
            else
            {
                max_ans = max(max_ans, temp);
                temp = 0;
                count = ele.first;
            }
        }
        max_ans = max(max_ans, temp);
    }

    return 0;
}
