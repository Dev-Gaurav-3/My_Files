#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums = {5,4,1,2,2};

    unordered_map<long long,int>mp;
    for(int ele : nums) mp[ele]++;
    int ans = 1;

    // case for 1 

    if(mp[1]){
        int cnt = mp[1];
        if(cnt&1){
            ans = max(ans,cnt);
        }
        else ans = max(ans,cnt-1);
    }

    for(auto &[a,b]:mp){
        if(a == 1) continue;
        int len = 0;
        long long temp = a;
        while(mp[temp] && mp[temp]>=2){
            len +=2;
            if(temp > 1e9) break;
            temp *= temp;
        }
        if(mp[temp]) len++;
        else len--;
        ans = max(ans,len);
    }

    return ans;

    
    return 0;
}