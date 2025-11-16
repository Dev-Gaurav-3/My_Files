#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {3,3,6,8};
    int target = 10;

    sort(nums.begin(),nums.end());
    int l = 0,r = nums.size()-1;
    int ans = 0;
    while(l<=r){
        if(nums[l]+nums[r] <= target){
            ans += pow(2,r-l);
            l++;
        }
        else if(nums[l]+nums[r]>target){
            r--;
        }
        else l++;
    }

    cout<<ans;

  return 0;
}
