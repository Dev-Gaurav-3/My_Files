#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {2,-3};

    int ans = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        unordered_map<int,int>mp;
        int k = i;
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            mp[nums[j]]++;
            sum += nums[j];
        }
        if(mp.count(sum)) ans++;
        for (int j = k; j < nums.size(); j++)
        {
            mp[nums[j-k]]--;
            if(mp[nums[j-k]] == 0) mp.erase(nums[j-k]);
            mp[nums[j]]++;
            sum -= nums[j-k];
            sum += nums[j];

            if(mp.count(sum)) ans++;
        }
    }

    cout<<ans;
    

  return 0;
}
