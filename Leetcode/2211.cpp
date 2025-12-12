#include<bits/stdc++.h>
using namespace std;

int main(){

    string directions = "LLRLRLLSLRLLSLSSSS";

    int ans = 0;
    stack<char>st;
    for(char ch : directions){
        if(st.empty()) st.push(ch);
        else if(ch == 'L' && st.top() == 'R'){
            ans += 2;
            st.pop();
        }
        else if(ch == 'L' && st.top() == 'S'){
            ans++;
        }
        else if(ch == 'S' && st.top() == 'R'){
            while(!st.empty() && st.top() == 'R'){
                ans++;
                st.pop();
            }
            st.push(ch);
        }
        else{
            st.push(ch);
        }
    }
    cout<<ans<<endl;;
  return 0;
}
