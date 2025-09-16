#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main(){

    string s = "10";
    int k = 2;

    stack<char>st;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if(st.top()>s[i] && k>0){
            st.pop();
            st.push(s[i]);
        }
        else if(k <= 0){
            st.push(s[i]);
        }
        k--;
    }

   string ans = "";

    while (!st.empty()) {
        if (st.size() == 1 && st.top() == '0') {
            st.pop();
            continue;
        }
        ans.push_back(st.top());  // if stack stores int digits
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;

    
    

    return 0;
}
