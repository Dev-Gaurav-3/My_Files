#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {3, 30, 34, 5, 9};
    vector<string> s;

    for (int i : nums)
    {
        s.push_back(to_string(i));
    }

    sort(s.begin(), s.end());
    string ans = "";
    for (int i = s.size() - 1; i > 0; i--)
    {
        if (s[i][0] == s[i - 1][0])
        {
            string s1 = s[i];
            string s2 = s[i - 1];
            int j = s1.size() - 1;
            while (s1[j] == 0)
            {
                s1.pop_back();
            }
            j = s2.size() - 1;
            while (s2[j] == 0)
            {
                s2.pop_back();
            }
            int a = stoll(s1);
            int b = stoll(s2);
            if (a > b)
            {
                ans += s[i];
            }
            else
            {
                swap(s[i], s[i - 1]);
                ans += s[i];
            }
        }
        else
        {
            ans += s[i];
        }
    }

    return 0;
}