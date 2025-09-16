#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>nums(1000000000);
    int k = 10000;

    long long ans = 0;
    
    while(k--){
        auto max = max_element(nums.begin(),nums.end());
        int idx = distance(nums.begin(),max);
        ans += *max;
        nums[idx] = int(nums[idx]/3) + 1;
    }

    cout<<ans;
    

    return 0;
}
