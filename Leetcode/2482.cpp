#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> mat = {{0, 1, 1}, {1, 0, 1}, {0, 0, 1}};

    vector<vector<int>> diff;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            int onesRow = 0;
            int onesCol = 0;
            int zeroRow = 0;
            int zeroCol = 0;
            for (int k = 0; k < mat[0].size(); k++)
            {
                if (mat[i][k] == 1)
                {
                    onesRow++;
                }
                else
                {
                    zeroRow++;
                }
            }
            for (int k = 0; k < mat.size(); k++)
            {
                if (mat[k][j] == 1)
                {
                    onesCol++;
                }
                else
                {
                    zeroCol++;
                }
            }
            diff[i][j] = onesCol + onesRow - zeroRow - zeroCol;
        }
    }

    for (int i = 0; i < d; i++)
    {
        /* code */
    }

    return 0;
}
