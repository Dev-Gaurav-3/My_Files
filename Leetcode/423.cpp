#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "owoztneoer";
    unordered_map<char,int>mp;

    for(char i : s){
        mp[i]++;
    }
    string ans = "";
    vector<string>v = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i = 0;i<v.size();i++){
        string x = v[i];
        int mini = INT16_MAX;
        bool flag = false;
        for(char ch:x){
            if(!mp[ch]){
                flag = true;
                break;
            }
            mini = min(mini,mp[ch]);
            mp[ch]--;
        }
        if(!flag){
            while(mini--){
                ans += to_string(i);
            }
            mini = INT8_MAX;
        }
    }


  return 0;
}
