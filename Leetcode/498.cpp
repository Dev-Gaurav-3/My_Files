#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> diagonal(vector<vector<int>> &v)
{
    int row = 0, col = 0;
    int a = v.size(), b = v[0].size();
    vector<int> ans(a * b);
    for (int i = 0; i < a * b; i++)
    {
        ans[i] = v[row][col];

        if (row + col % 2 == 0)
        {
            if (col == b - 1)
                row++;
            else if (row == 0)
                col++;
            else
            {
                row--;
                col++;
            };
        }
        else
        {
            if (row == a - 1)
                col++;
            else if (col == 0)
                row++;
            else
            {
                row++;
                col--;
            };
        }
    }
    return ans;
}

int main()
{

    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    diagonal(v);

    return 0;
}
