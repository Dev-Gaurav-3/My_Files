#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> spells = {3, 1, 2};
    vector<int> potions = {8, 5, 8};
    int success = 16;
    vector<int> ans;
    sort(potions.begin(), potions.end());
    for (int i : spells)
    {
        long long x;
        if (success % i == 0)
        {
            x = success / i;
        }
        else
        {
            x = success / i + 1;
        }
        int lb = lower_bound(potions.begin(), potions.end(), x) - potions.begin();
        ans.push_back(potions.size() - lb);
    }

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
