#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string s = "aabcddeeeefff";

    vector<pair<char, int>> v(26, {0, 0});

    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a'].first = s[i] - 'a';
        v[s[i] - 'a'].second++;
    }

    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
