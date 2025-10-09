#include <bits/stdc++.h>
using namespace std;

int main()
{

    int startValue = 3;
    int target = 10;

    int ans = 0;
    while (target > startValue)
    {
        if (target % 2 == 0)
        {
            target /= 2;
        }
        else
        {
            target++;
        }
        ans++;
    }

    cout << ans + abs(target - startValue);

    return 0;
}
