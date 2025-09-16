#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{

    string s = "tree";

    unordered_map<char, int> mp;
    for (char ch : s)
    {
        mp[ch]++;
    }
    string ans = "";

    vector<pair<char, int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), [](auto &a, auto &b)
         { return a.second > b.second; });

    for (auto &it : v)
    {
        while (it.second--)
        {
            ans += it.first;
        }
    }

    return 0;
}