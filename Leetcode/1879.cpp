#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{

    vector<int> nums1 = {1, 0, 3};
    vector<int> nums2 = {5, 3, 4};

    unordered_map<int, int> mp;
    for (int i : nums1)
    {
        mp[i]++;
    }
    for (int i : nums2)
    {
        if (!mp[i])
        {
            mp[i]++;
        }
        else
        {
            mp[i]--;
        }
    }

    return 0;
}
