#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n = 2;
    vector<vector<int>> queries = {{0, 0}};
    vector<long long> v;
    int m = 0;
    int count = 1;
    while (n > 0)
    {
        int ans = pow(2, m);
        int prev = ans * (n % 2);
        v.push_back(prev * count);
        count *= prev;
        m++;
        n /= 2;
    }

    vector<int> ans;
    const int Mod = 1e9 + 7;
    for (int i = 0; i < queries.size(); i++)
    {
        int a = queries[i][0];
        int b = queries[i][1];

        if (a == 0 && b != 0)
        {
            int toPush = v[a] * v[b];
            ans.push_back(toPush % Mod);
        }
        else if (a == 0 && b == 0)
        {
            int toPush = v[a];
            ans.push_back(toPush % Mod);
        }
        else if (a == b)
        {
            int toPush = v[a] / v[a - 1];
            ans.push_back(toPush % Mod);
        }
        else
        {
            int toPush = (v[b] * v[a]) / v[a - 1];
            ans.push_back(toPush % Mod);
        }
    }

    for (int i : ans)
    {
        cout << i << " ";
    }
}
