#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "IIIDIDDD";

    vector<int> v(10, 1);
    int dec = 0;
    int inc = 1;

    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'D')
        {
            inc++;
            i++;
            while (i < s.size() && s[i] != 'I')
            {
                i++;
                inc++;
            }
            dec = inc;
            while (dec > 0)
            {
                if (v[dec] == 1)
                {
                    ans += to_string(dec);
                    v[dec]--;
                }
                dec--;
            }
        }
        else
        {
            ans += to_string(inc);
            v[inc]--;
        }
        inc++;
    }

    cout << ans;

    return 0;
}
