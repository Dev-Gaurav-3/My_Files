#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 10, 3, 3, 3};
    int k = 5;

    priority_queue<int> pq;
    for (int i : nums)
    {
        pq.push(i);
    }
    int ans = 0;
    while (k--)
    {
        int top = pq.top();
        pq.pop();
        ans += top;
        if (top % 3 == 0)
        {
            top /= 3;
        }
        else
        {
            top /= 3;
            top++;
        }
        pq.push(top);
    }

    return 0;
}
