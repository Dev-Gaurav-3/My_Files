#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {0,0,1,1,1,0,0};
    int k = 0;

    int l = 0;
    int zeroes = 0;
    int ans = 0;

    for (int r = 0; r < nums.size(); r++)
    {
        if(nums[r] == 0) zeroes++;

        while(zeroes>k){
            if(nums[l] == 0) zeroes--;
            l++;
        }
        ans = max(r-l+1,ans);
    }
    cout<<ans;


  return 0;
}
