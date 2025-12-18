#include<bits/stdc++.h>
using namespace std;

int main(){
    string formula = "K4(ON(SO3)2)2";

    map<string,int>mp;
    stack<string>st;
    stack<string>st2;
    for(char ch:formula){
        if(ch-'0'>0 && ch-'0' <= 9){
            int num = ch - '0';
            if(st.top()[0] == ')'){
                st.pop();
                while(st.top()[0] != '('){
                    if(mp.count(st.top())) 
                    st2.push(st.top());
                    st.pop();
                }
                st.pop();
                while(!st2.empty()){
                    st.push(st2.top());
                    st2.pop();
                }
            }
            else{
                mp[st.top()] += num;
            }
            continue;
        }
        st.push(string(1,ch));
    }

  return 0;
}
