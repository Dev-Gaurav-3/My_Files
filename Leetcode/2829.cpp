#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int k = 4;

    unordered_map<int, int> mp;
    int sum = 0;
    int i = 1;
    while (n--)
    {
        if (mp[i] > 0)
        {
            i++;
            n++;
            continue;
        }
        else
        {
            sum += i;
            mp[k - i]++;
            i++;
        }
    }

    return 0;
}
