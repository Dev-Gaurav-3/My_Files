#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

    vector<int>nums = {0,1,7,4,4,5};
    int lower = 3;
    int upper = 6;
    long long ans = 0;
    
    sort(nums.begin(),nums.end());

    for(int i = 0;i<nums.size()-1;i++){
        int max_req = upper-nums[i];
        int min_req = lower-nums[i];
        auto it1 = upper_bound(nums.begin()+i+1,nums.end(),max_req);
        auto it2 = lower_bound(nums.begin()+i+1,nums.end(),min_req);

        ans += it1-it2;
    }

    cout<<ans;


    

    return 0;
}
