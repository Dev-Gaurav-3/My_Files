#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ababcbacadefegdehijhklij";

    vector<int> dp(26, -1);
    vector<int> ans;
    int l = 0, r = s.size() - 1;
    int cnt = 0;
    int prev = INT_MIN;

    for (int i = 0; i < s.size(); i++)
    {
        dp[s[i] - 'a'] = i;
    }

    while (l < s.size())
    {
        prev = dp[s[l] - 'a'];
        r = l;
        while (r < prev)
        {
            prev = max(prev, dp[s[r] - 'a']);
            r++;
        }
        ans.push_back(r - l + 1);
        l = r + 1;
    }

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
