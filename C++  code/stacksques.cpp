#include<iostream>
#include<stack>
using namespace std;

stack<char>st;

int main(){
    
    string s = "([)]";
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
            st.push(s[i]);
        }
        else{
            if(s[i] == ')' && st.top() == '('){
                st.pop();
            }
            else if(s[i] == ']' && st.top() == '['){
                st.pop();
            }
            else if(s[i] == '}' && st.top() == '{'){
                st.pop();
            }
            else{
                cout<<"Invalid";
            }
        }
    }
    return st.empty();
    

    return 0;
}

// 