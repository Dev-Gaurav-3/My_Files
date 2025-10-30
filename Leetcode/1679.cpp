#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,2,3,4};
    int k = 5;

    unordered_map<int,int>mp;
    for(int i : nums){
        mp[i]++;
    }
    int ans = 0;
    for(auto ele:mp){
        int num = ele.first;
        if(mp[k-num] && mp[k-num]>0){
            ans++;
            mp[num]--;
            mp[k-num]--;
        }
    }

    cout<<ans;

  return 0;
}
