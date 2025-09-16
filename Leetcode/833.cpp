#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s = "abcd";
    vector<int> indices = {0, 2};
    vector<string> sources = {"a", "cd"};
    vector<string> targets = {"eee", "ffff"};

    for (int i = sources.size() - 1; i >= 0; i--)
    {
        size_t itr = s.find(sources[i], indices[i]);
        if (itr != string::npos && itr == indices[i])
        {
            s.replace(indices[i], indices[i] + sources[i].size(), targets[i]);
        }
    }

    cout << s;
    return 0;
}
