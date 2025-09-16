#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{

    string text = "hello world";
    string brokenLetters = "ad";
    int ans = 0;
    for (int i = 0; i < text.size(); i++)
    {
        unordered_map<char, int> mp;
        ans++;
        while (text[i] != ' ' && i < text.size())
        {
            mp[text[i]]++;
            i++;
        }
        for (char ch : brokenLetters)
        {
            if (mp.find(ch) != mp.end())
            {
                ans--;
                break;
            }
        }
    }

    return 0;
}
