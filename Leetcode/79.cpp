#include <iostream>
#include <vector>
using namespace std;

bool canwego(vector<vector<char>>& grid, int a, int b, string& word, int k) {
    return (a >= 0 && b >= 0 && a < grid.size() && b < grid[0].size()) && grid[a][b] == word[k];
}

bool f(vector<vector<char>>& grid, int a, int b, string& word, int k) {
    if (k == word.size()) return true;

    if (!canwego(grid, a, b, word, k)) return false; 

    char temp = grid[a][b];
    grid[a][b] = '#';

    bool found = f(grid, a + 1, b, word, k + 1) ||
                 f(grid, a - 1, b, word, k + 1) ||
                 f(grid, a, b + 1, word, k + 1) ||
                 f(grid, a, b - 1, word, k + 1);

    grid[a][b] = temp;
    return found;
}

int main() {
    vector<vector<char>> grid = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    string word = "ABCCED";
    bool found = false;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == word[0]) {
                if (f(grid, i, j, word, 0)) {
                    found = true;
                    break;
                }
            }
        }
        if (found) break;
    }

    cout << (found ? "True" : "False") << endl;

    return 0;
}
