#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {1, 2, 2, 3, 3};
    int k = 2;

    sort(nums.begin(), nums.end());
    vector<pair<int, int>> v;
    for (int i = 0; i < nums.size(); i++)
    {
        if (v.empty() || v.back().first != nums[i])
        {
            v.push_back({nums[i], 1});
        }
        else
        {
            v.back().second++;
        }
    }

    sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return a.second > b.second; });

    for (auto ele : v)
    {
        cout << ele.first << " " << ele.second << endl;
    }

    return 0;
}
