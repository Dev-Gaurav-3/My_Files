#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {2,2,3,3,3,4};

    vector<int>mp(1e4,0);
    int mx = 0;
    for(auto &i : nums) {mp[i] += i;mx = max(mx,i);};
    vector<int>dp(mx+1, 0);
    dp[0] = 0;
    dp[1] = mp[1];
    for(int i = 2;i<=mx;i++){
      dp[i] = max(dp[i-1], dp[i-2] + mp[i]);
    }
    cout<< dp[mx] <<endl;

  return 0;
}
