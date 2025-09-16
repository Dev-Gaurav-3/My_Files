#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> coins = {1, 1, 3, 4, 10};

    sort(coins.begin(), coins.end());

    int res = 1;

    for (int i : coins)
    {
        if (res >= i)
            res += i;

        else
        {
            break;
        }
    }

    cout << res;

    return 0;
}
