#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "))()))";
    string locked = "010100";

    stack<char> st1;
    stack<char> st2;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')' && locked[i] == 0)
        {
            st1.push(')');
            st2.push('(');
        }
    }

    return 0;
}
