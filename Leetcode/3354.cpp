#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,0,2,0,3};

    vector<int>prefix = nums;
    for(int i = 1;i<prefix.size();i++){
        prefix[i] = prefix[i] + prefix[i-1];
    }
    int ans = 0;
    for(int i = 0;i<nums.size();i++){
        if(nums[i] == 0 && i>0 && i<nums.size()-1){
            int l_sum = prefix[i-1];
            int r_sum = prefix[prefix.size()-1] - prefix[i+1];

            if(l_sum == r_sum || (abs(l_sum-r_sum) == 1)) ans++;
        }
    }
    cout<<ans;

  return 0;
}
