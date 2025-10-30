#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<char>chars = {'a','a','b','b','c','c','c'};  
  int r = 0;
    vector<char>ans;
    for(int i = 0;i<chars.size();i++){
        char ch = chars[i];
        int cnt = 0;
        while(r<chars.size() &&chars[r] == ch){
        r++;
        cnt++;
        }
        i = r-1;
        ans.push_back(ch);
        if(cnt == 1) continue;
        string s = to_string(cnt);
        for(char c:s){
            ans.push_back(c);
        }
    }

  for(char ch : ans){
    cout<<ch<<" ";
  }

  return 0;
}
