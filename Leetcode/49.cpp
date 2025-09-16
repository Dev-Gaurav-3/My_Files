#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<int, int> mp;

    sort(strs.begin(), strs.end());

    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        for (char ch : s)
        {
        }
    }

    return 0;
}
