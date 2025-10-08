#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "10101011101";
    int ans = 0;
    for (int i = 0; i < s.size(); i += 2)
    {
        ans += (s[i] != s[i + 1]);
    }
    return 0;
}
