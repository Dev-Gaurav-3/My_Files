#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {
    string s = "adcz";
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        if (!st.empty() && abs(st.top() - s[i]) == 25) {
            st.pop();
        }
        else if (!st.empty() && abs(st.top() - s[i]) == 1) {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
}
