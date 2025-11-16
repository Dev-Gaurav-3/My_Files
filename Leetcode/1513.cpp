#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "111111";
    int MOD = 1e9+7;
    int ans = 0,ones = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '1') ones++;
        else ones = 0;
        ans = (ans+ones)%MOD;
    }
    cout<<ans;

  return 0;
}
