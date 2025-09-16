#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{

    vector<vector<int>> grid = {{1, 2, 3, 4, 5}, {3, 4, 1, 2, 5}};
    vector<int> limits = {1, 2};
    int k = 3;

    priority_queue<int> pq;

    for (int i = 0; i < grid.size(); i++)
    {
        sort(grid[i].begin(), grid[i].end());
        for (int j = grid[i].size() - limits[i]; j < grid[i].size(); j++)
        {
            pq.push(grid[i][j]);
        }
    }
    int sum = 0;
    while (k--)
    {
        sum += pq.top();
        pq.pop();
    }

    cout << sum;

    return 0;
}
