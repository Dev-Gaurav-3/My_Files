#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{

    string s = "(ed(et(oc))el)";
    stack<char> st;

    for (char i : s)
    {
        if (i == ')')
        {
            string ans = "";
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
            for (char ch : ans)
            {
                st.push(ch);
            }
        }
        else
            st.push(i);
    }
    string res = "";
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout << res;

    return 0;
}
