#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size();
        if (n == 1)
            return grid;

        // Top-right part (excluding main diagonal) -> ascending
        for (int i = 1; i < n; i++)
        {
            int a = 0, b = i;
            vector<int> v;
            while (a < n && b < n)
            {
                v.push_back(grid[a++][b++]);
            }
            sort(v.begin(), v.end());
            a = 0;
            b = i;
            int k = 0;
            while (a < n && b < n)
            {
                grid[a++][b++] = v[k++];
            }
        }

        // Bottom-left part (including main diagonal) -> descending
        for (int i = 0; i < n; i++)
        {
            int a = i, b = 0;
            vector<int> v;
            while (a < n && b < n)
            {
                v.push_back(grid[a++][b++]);
            }
            sort(v.begin(), v.end(), greater<int>());
            a = i;
            b = 0;
            int k = 0;
            while (a < n && b < n)
            {
                grid[a++][b++] = v[k++];
            }
        }

        return grid;
    }
};
int main()
{

    return 0;
}
