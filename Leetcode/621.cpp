#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

int main()
{

    vector<char> tasks = {'A', 'C', 'A', 'B', 'D', 'B'};
    int n = 1;

    unordered_map<char, int> mp;
    string ans = "";
    for (char ch : tasks)
    {
        mp[ch]++;
    }

    return 0;
}
