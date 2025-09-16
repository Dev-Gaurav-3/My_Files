#include <iostream>
#include <unordered_map>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return false;
    }
    return true;
}

int main()
{

    int n = 2;
    string s = "";
    int m = 0;
    while (n--)
    {
        m *= 10;
        m += 9;
    }
    int first = m;
    while (m--)
    {
        long long prod = first * m;
        if (isPalindrome(to_string(prod)))
        {
            return;
        }
    }

    return 0;
}
