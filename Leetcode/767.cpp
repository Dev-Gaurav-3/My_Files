#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reorganizeString(string s)
    {
        unordered_map<char, int> mp;
        for (char ch : s)
            mp[ch]++;

        priority_queue<pair<int, char>> pq;
        for (auto &it : mp)
            pq.push({it.second, it.first});

        string ans = "";
        pair<int, char> prev = {0, '#'};

        while (!pq.empty())
        {
            auto curr = pq.top();
            pq.pop();

            ans += curr.second;
            curr.first--;

            if (prev.first > 0)
                pq.push(prev);

            prev = curr;
        }

        if (ans.size() == s.size())
            return ans;
        return "";
    }
};
