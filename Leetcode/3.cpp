#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{

    string s = "abcabcbb";
    int max_len = 0;
    int left = 0;
    set<char> st;
    for (int right = 0; right < s.size(); right++)
    {
        while (st.find(s[right]) != st.end())
        {
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        max_len = max(max_len, right - left + 1);
    }

    return 0;
}
