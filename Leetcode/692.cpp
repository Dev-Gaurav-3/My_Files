#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    int k = 2;

    vector<pair<string, int>> v;

    for (int i = 0; i < words.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].first == words[i])
            {
                flag = true;
                v[j].second++;
            }
        }
        if (!flag)
        {
            v.push_back({words[i], 1});
        }
    }

    sort(v.begin(), v.end(), [](pair<string, int> &a, pair<string, int> &b)
         { return a.second > b.second; });

    return 0;
}
