#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> heights = {6, 5, 3, 9, 2, 7};
    int ans = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int sum = heights[i];
        int l = i - 1, r = i + 1;
        int min_l = heights[i];
        int min_r = heights[i];
        while (l >= 0)
        {
            min_l = min(min_l, heights[l]);
            sum += min_l;
            l--;
        }
        while (r < heights.size())
        {
            min_r = min(min_r, heights[r]);
            sum += min_r;
            r++;
        }
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}
