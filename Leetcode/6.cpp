#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "PAYPALISHARING";
    int numRows = 3;
    int n = s.size() / numRows + 2;
    vector<vector<int>> v(numRows, vector<int>(n, 0));
    int j = 0, k = 0;
    while (true)
    {
        int i = 0;
        for (; k < s.size() && i < numRows; i++)
        {
            v[i][j] = s[k];
            k++;
        }
        i--;
        while (i > 0 && k < s.size())
        {
            i--,
                v[i][j] = s[k];
            j++;
            k++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
