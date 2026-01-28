#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {5,2,6,1};
    map<int,vector<int>>mp;
    for (int i = 0;i<nums.size();i++)
    {
        mp[nums[i]].push_back(i);
    }
    vector<int>ans(nums.size(),0);
    for (int i = 0; i < nums.size(); i++)
    {
        int cnt = 0;
        for (auto &j : mp)
        {
            if(j.first >= nums[i]) break;
            auto lb = upper_bound(j.second.begin(),j.second.end(),i);
            cnt += (j.second.end() - lb);
        }
        ans[i] = cnt;
    }

    for (auto &i : ans)
    {
        cout<<i<<" ";
    }
    
    
    

  return 0;
}
