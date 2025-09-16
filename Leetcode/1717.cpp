#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{

    string s = "cdbcbbaaabab";
    int x = 4;
    int y = 5;
    int ans = 0;
    stack<char> st;

    // First pass: remove higher-value substring
    for (char ch : s)
    {
        if (x > y)
        {
            if (ch == 'b' && !st.empty() && st.top() == 'a')
            {
                ans += x;
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
        else
        {
            if (ch == 'a' && !st.empty() && st.top() == 'b')
            {
                ans += y;
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    // Build leftover string from stack
    string leftover;
    while (!st.empty())
    {
        leftover.push_back(st.top());
        st.pop();
    }
    reverse(leftover.begin(), leftover.end());

    // Second pass: remove the other substring
    stack<char> st2;
    for (char ch : leftover)
    {
        if (x > y)
        { // we already removed "ab", now remove "ba"
            if (ch == 'a' && !st2.empty() && st2.top() == 'b')
            {
                ans += y;
                st2.pop();
            }
            else
            {
                st2.push(ch);
            }
        }
        else
        { // we already removed "ba", now remove "ab"
            if (ch == 'b' && !st2.empty() && st2.top() == 'a')
            {
                ans += x;
                st2.pop();
            }
            else
            {
                st2.push(ch);
            }
        }
    }
    cout << ans;

    return 0;
}
