#include<bits/stdc++.h>
using namespace std;

vector<int>dp = vector<int>(1e5,-1);
    int bits(int n){
        if(dp[n] != -1) return dp[n];
        int ans = 0;
        int k = n;
        while(n>0){
            ans *= 10;
            ans += n%2;
            n /= 2;
        }
        return dp[k] = ans;
    }

int main(){

    int n = 5;
    vector<int>ans;
    for(int i = 0;i<=n;i++){
        ans.push_back(bits(i));
    }

  return 0;
}
