#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums = {3,6,2,8};

    vector<long long>pref(nums.size());
    int mx = nums[0];
    for(int i = 0;i<nums.size();i++){
        mx = max(mx,nums[i]);
        pref[i] = __gcd(nums[i],mx);
    }
    sort(pref.begin(),pref.end());
    int l = 0,r = pref.size()-1;
    long long ans = 0;
    while(l<r){
        ans += __gcd(pref[l],pref[r]);
        l++;
        r--;
    }
    
    return 0;
}