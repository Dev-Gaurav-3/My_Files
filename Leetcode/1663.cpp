#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3, k = 78;

    n--;
    string ans = "";

    while (k < n * 26)
    {
        ans += 'a';
        k--;
        n--;
    }

    cout << ans;

    return 0;
}
