#include<iostream>
using namespace std;

int main(){

    string s = "abcdefd";
    char ch = 'd';
    size_t idx = s.find(ch);

    string ans = "";

    for(int i = idx;i>=0;i--){
        ans.push_back(s[i]);
    }
    if(idx == s.size()) cout<<s;return 0;
    for (int i = i+1; i < s.size(); i++)
    {
        ans.push_back(s[i]);
    }
    
    cout<<ans;
    return 0;
}
