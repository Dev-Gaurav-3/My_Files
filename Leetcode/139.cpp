#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "catsanddog";
    vector<string> wordDict = {"cats", "dog", "sand", "and", "cat"};

    for (string str : wordDict)
    {
        size_t f = s.find(str);
        if (f != string::npos)
        {
            s.erase(f, str.size());
        }
        else
        {
            return false;
        }
    }

    return 0;
}
