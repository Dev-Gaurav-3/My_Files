#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> cards = {3, 1, 9, 4, 2, 3, 4, 7};

    vector<int> v(1e6 + 1, 0);

    int n = cards.size();
    int l = 0;
    int r = 0;
    int min_len = INT16_MAX;
    while (r < n)
    {
        v[cards[r]]++;

        while (v[cards[r]] > 1)
        {
            min_len = min(min_len, r - l + 1);
            v[cards[l]]--;
            l++;
        }
        r++;
    }

    cout << min_len;

    return 0;
}
