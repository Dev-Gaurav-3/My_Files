#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

int main()
{

    vector<int> arr = {3, 3, 3, 3, 5, 5, 5, 2, 2, 7};
    unordered_map<int, int> mp;
    for (int i : arr)
    {
        mp[i]++;
    }
    priority_queue<pair<int, int>> pq;
    for (auto i : mp)
    {
        pq.push(make_pair(i.second, i.first));
    }

    // while (!pq.empty())
    // {
    //     cout << pq.top().first << " " << pq.top().second << endl;
    //     pq.pop();
    // }
    int curr_size = 0;

    while (curr_size < arr.size() / 2)
    {
        curr_size += pq.top().first;
        pq.pop();
    }

    cout << pq.size();

    return 0;
}
