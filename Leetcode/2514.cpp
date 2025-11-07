#include<bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;
int factorial(int n){
    int ans = 1;
    while(n){
        ans *= n;
        n--;
    }
    return ans;
}
int countAnagrams(string s) {
    long long ans = 1;
    for(int i = 0;i<s.size();i++){
        if(s[i] == ' ') continue;
        string res = "";
        int j = i;
        for(;j<s.size();j++){
            if(s[j] == ' ') break;
            res += s[j];
        }
        i = j;
        ans *= factorial(res.size());
        ans %= MOD; 
        unordered_map<char,int>mp;
        for(char ch:res){
            mp[ch]++;
        }
        for(auto ele:mp){
            if(ele.second >1){
                ans /= factorial(ele.second);
            }
        }
    }
    return ans;
}

int main(){

    string s = "too hot";
    cout<<countAnagrams(s);
    

  return 0;
}
