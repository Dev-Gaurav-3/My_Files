#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    string s = "aabababb";
    stack<char>st;
        int ans = 0;
        for(auto ele:s){
            if(st.empty() && ele == 'b'){
                ans++;
            }
            else if(!st.empty() && st.top() == 'b' && ele == 'a'){
                ans++;
            }
            else{
                st.push(ele);
            }
        }

    return 0;
}
