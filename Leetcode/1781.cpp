#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{

    string s = "aabcb";
    int k = 3;

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        map<char, int> mp;
        for (int j = i; j < s.size(); j++)
        {
            mp[s[j]]++;
            int mini = INT8_MAX;
            int maxi = INT8_MIN;
            for (auto ele : mp)
            {
                mini = min(mini, ele.second);
                maxi = max(maxi, ele.second);
            }
            ans += maxi - mini;
        }
    }

    return 0;
}
