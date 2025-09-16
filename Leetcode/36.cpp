#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<char>> sudoku = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'}, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, {'.', '9', '8', '.', '.', '.', '.', '6', '.'}, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}, {'4', '.', '.', '8', '.', '3', '.', '.', '1'}, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}, {'.', '6', '.', '.', '.', '.', '2', '8', '.'}, {'.', '.', '.', '4', '1', '9', '.', '.', '5'}, {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    for (int i = 0; i < 9; i += 3)
    {
        for (int l = 0; l < 9; l += 3)
        {
            vector<int> v(10, 0);
            for (int j = i; j < i + 3; j++)
            {
                for (int k = l; k < l + 3; k++)
                {
                    char a = sudoku[j][k];

                    if (a == '.')
                        continue;
                    else if (v[a - '0'] == 0)
                        v[a - '0']++;
                    else
                    {
                        cout << false;
                    }
                }
            }
        }
    }
    // along row //
    for (int i = 0; i < 9; i++)
    {
        vector<int> v(10, 0);
        for (int j = 0; j < 9; j++)
        {
            char a = sudoku[i][j];
            if (a == '.')
                continue;
            else if (v[a - '0'] == 0)
                v[a - '0']++;
            else
            {
                cout << false;
            }
        }
    }

    // along column //

    for (int i = 0; i < 9; i++)
    {
        vector<int> v(10, 0);
        for (int j = 0; j < 9; j++)
        {
            char a = sudoku[j][i];
            if (a == '.')
                continue;
            else if (v[a - '0'] == 0)
                v[a - '0']++;
            else
            {
                cout << false;
            }
        }
    }

    return 0;
}
