#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string s = "cbabc";

    int i = 0;
    int n = s.size();
    while (i < n && s[i] == 'a')
        i++;
    if (i >= n)
        s[n - 1] = 'z';
    while (i < n && s[i] != 'a')
    {
        s[i]--;
        i++;
    }

    return s;

    return 0;
}
