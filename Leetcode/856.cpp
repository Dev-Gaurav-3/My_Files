#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int>st;
    string s = "()()";
        int ans = 0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '('){
                st.push('(');
            }
            else{
                if(!st.empty()){
                    ans++;
                    st.pop();
                }
            }
        }
    

    return 0;
}
