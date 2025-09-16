#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> grid = {{1, 2}, {3, 4}};

    long long prod = 1;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            prod *= grid[i][j];
            prod % 12345;
        }
    }

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            grid[i][j] = prod / grid[i][j];
        }
    }

    return 0;
}
