#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{

    vector<int> nums = {3, 2, 1, 2, 3, 4, 3, 4, 5, 9, 10, 11};
    int k = 3;

    map<int, int> mp;

    for (int i : nums)
    {
        mp[i]++;
    }

    while (!mp.empty())
    {
    }

    return 0;
}
