#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int max_len = INT32_MIN;
    string s = "aaabb";
    int k = 3;
    string ans = "";
    vector<int> freq(26, 0);
    for (int i = 0; i < k; i++)
    {
        ans += s[i];
        freq[s[i] - 'a']++;
    }

    while (k < s.size())
    {
    }

    return 0;
}
