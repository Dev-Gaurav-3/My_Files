#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcabc";
    
    unordered_map<char, vector<int>> mp;

        for (int i = 0; i < s.size(); i++) mp[s[i]].push_back(i);

        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            char ch2, ch3;
            if (s[i] == 'a') ch2 = 'b', ch3 = 'c';
            else if (s[i] == 'b') ch2 = 'a', ch3 = 'c';
            else ch2 = 'a', ch3 = 'b';

            int p1 = upper_bound(mp[ch2].begin(), mp[ch2].end(), i) - mp[ch2].begin();
            int p2 = upper_bound(mp[ch3].begin(), mp[ch3].end(), i) - mp[ch3].begin();
            if (p1 == mp[ch2].size() || p2 == mp[ch3].size()) continue;
            int mx = max(mp[ch2][p1], mp[ch3][p2]);
            ans += s.size() - mx;
        }
        return ans;
    
    

    return 0;
}