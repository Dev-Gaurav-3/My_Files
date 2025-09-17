#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> ans;
    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i] == "0")
            continue;
        string s1 = strs[i];
        sort(s1.begin(), s1.end());
        vector<string> temp;
        temp.push_back(strs[i]);
        for (int j = i + 1; j < strs.size(); j++)
        {
            if (strs[j] == "0")
                continue;
            string s2 = strs[j];
            sort(s2.begin(), s2.end());
            if (s1 == s2)
            {
                temp.push_back(strs[j]);
            }
            strs[j] = "0";
        }
        strs[i] = "0";
        ans.push_back(temp);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
