#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "AABABBA";
    int k = 2;

    vector<int> v(26, 0);
    int n = s.size();
    int rt = 0, lt = 0;
    int max_f = 0;
    int max_len = 0;

    while (rt < n)
    {
        v[s[rt] - 'A']++;
        max_f = max(max_f, v[s[rt] - 'A']);

        if ((rt - lt + 1) - max_f > k)
        {
            v[s[lt] - 'A']--;
            lt++;
        }

        max_len = max(max_len, (rt - lt + 1));
        rt++;
    }

    cout << max_len;

    return 0;
}
