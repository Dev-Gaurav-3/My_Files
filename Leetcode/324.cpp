#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 2, 2, 3, 1};

    priority_queue<int> pq;
    for (int i : nums)
    {
        pq.push(i);
    }
    vector<int> ans(nums.size(), -1);
    for (int i = 1; i < nums.size(); i += 2)
    {
        ans[i] = pq.top();
        pq.pop();
    }
    for (int i = 0; i < nums.size(); i += 2)
    {
        ans[i] = pq.top();
        pq.pop();
    }

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
