#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "cotxazilut", t = "nahrrmcchxwrieqqdwdpneitkxgnt";
    int ans = 0;
    vector<int>v1(26,0);
    vector<int>v2(26,0);

    for(char ch:s){
        v1[ch-'a']++;
    }
    for(char ch:t){
        v2[ch-'a']++;
    }

    for(int i = 0;i<26;i++){
        ans += abs(v1[i] - v2[i]);
    }

    cout<<ans;
    

    return 0;
}
