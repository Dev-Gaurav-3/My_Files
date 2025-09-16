#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{

    vector<int> nums = {2, 1, 3, 5, 6};
    int k = 5;
    int multiplier = 2;

    priority_queue<int, vector<int>, greater<int>> pq;
    int mod = 1e9 + 7;

    for (int i : nums)
    {
        pq.push(i);
    }

    while (k--)
    {
        int n = pq.top();
        pq.pop();

        pq.push((n * multiplier) % mod);
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
