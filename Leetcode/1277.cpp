#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 1, 1, 1}};
    int cnt = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 1 && i > 0 && j > 0)
            {
                matrix[i][j] = min({matrix[i - 1][j], matrix[i - 1][j - 1], matrix[i][j - 1]}) + 1;
            }
            cnt += matrix[i][j];
        }
    }

    cout << cnt;

    return 0;
}
