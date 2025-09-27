#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<char>> board = {
        {'X', 'O', 'O', 'O', 'X'},
        {'X', 'O', 'X', 'O', 'X'}};

    vector<pair<int, int>> p;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == 'O')
            {
                bool flag = false;
                pair<int, int> first = {i, j};
                j++;
                for (; j < board[0].size(); j++)
                {
                    if (board[i][j] == 'O')
                    {
                        p.push_back({i, j});
                        flag = true;
                    }
                    else
                    {
                        break;
                    }
                }
                if (flag)
                {
                    p.push_back(first);
                }
            }
        }
    }
    for (int j = 0; j < board[0].size(); j++)
    {
        for (int i = 0; i < board.size(); i++)
        {
            if (board[i][j] == 'O')
            {
                bool flag = false;
                pair<int, int> first = {i, j};
                i++;
                for (; i < board.size(); i++)
                {
                    if (board[i][j] == 'O')
                    {
                        p.push_back({i, j});
                        flag = true;
                    }
                    else
                    {
                        break;
                    }
                }
                if (flag)
                {
                    p.push_back(first);
                }
            }
        }
    }

    for (auto i : p)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
