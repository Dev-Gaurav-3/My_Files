#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {1, 2, 3};
    queue<int> q;
    for (int i : nums)
    {
        q.push(i);
    }
    sort(nums.begin(), nums.end());

    int i = 0;
    int ans = 0;
    while (!q.empty())
    {
        if (q.front() == nums[i])
        {
            q.pop();
            i++;
        }
        else
        {   
            int to_add = q.front();
            q.pop();
            q.push(to_add);
        }
        ans++;
    }

    cout << ans;

    return 0;
}
