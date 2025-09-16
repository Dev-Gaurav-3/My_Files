#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> nums = {{1, 2, 3, 4, 5},
                                {6, 7},
                                {8},
                                {9, 10, 11},
                                {12, 13, 14, 15, 16}};
    int size = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        size = max(size, (int)nums[i].size());
    }

    vector<vector<int>> v(nums.size(), vector<int>(size, -1));
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            v[i][j] = nums[i][j];
        }
    }
    int i = 0, j = 0;
    vector<int> ans;
    for (int k = 0; k < v.size(); k++)
    {
        i = k;
        j = 0;
        while (i >= 0 && j < v[0].size())
        {
            if (v[i][j] != -1)
            {
                ans.push_back(v[i][j]);
            }
            i--;
            j++;
        }
    }

    if (v[size].size() > 1)
    {
        for (int k = 1; k < size; k++)
        {
            i = v.size() - 1;
            j = k;
            while (i >= 0 && j < v[0].size())
            {
                if (v[i][j] != -1)
                {
                    ans.push_back(v[i][j]);
                }
                i--;
                j++;
            }
        }
    }

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
