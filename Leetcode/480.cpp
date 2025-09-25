#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<float> ans;

    for (int i = 0; i < nums.size() - k + 1; i++)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int j = i; j < i + k; j++)
        {
            pq.push(nums[j]);
        }
        int x = pq.size() / 2;
        while (x--)
        {
            pq.pop();
        }
        if (k % 2 != 0)
        {
            ans.push_back(pq.top() / 1.0);
        }
        else
        {
            int sum = pq.top();
            pq.pop();
            sum += pq.top();

            ans.push_back(sum / 2.0);
        }
    }

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
