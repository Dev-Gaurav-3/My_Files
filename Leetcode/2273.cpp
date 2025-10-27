#include<bits/stdc++.h>
using namespace std;

bool haveCommonChar(string s1, string s2) {
        int mask1 = 0, mask2 = 0;

        for (char c : s1)
            mask1 |= (1 << (c - 'a'));

        for (char c : s2)
            mask2 |= (1 << (c - 'a'));

        return (mask1 & mask2) == 0;
    }

int main(){
    vector<string>words = {"abba","baba","abab","cd","cd"};

    unordered_map<string,int>mp;
    vector<string>ans;
        for(int i = 0;i<words.size();i++){
            for(int j = i+1;j<words.size();j++){
                if(haveCommonChar(words[i],words[j])){
                    mp[words[i]]++;
                }
            }
        }   
        for(auto ele:mp){
            ans.push_back(ele.first);
        }

  return 0;
}
