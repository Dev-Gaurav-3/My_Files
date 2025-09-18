#include <bits/stdc++.h>
using namespace std;

string invert(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = (s[i] == '0' ? '1' : '0');
    }
    return s;
}

string f(int n)
{
    if (n == 1)
        return "0";

    string prev = f(n - 1);
    string inv = invert(prev);
    reverse(inv.begin(), inv.end());

    return prev + "1" + inv;
}

int main()
{

    int n = 20;
    int k = 1;

    cout << f(n);

    return 0;
}
