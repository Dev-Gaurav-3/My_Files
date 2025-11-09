#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {3,1,3,4,3};
    int k = 5;

    sort(nums.begin(),nums.end());
    int l = 0,r = nums.size()-1;
    int op = 0;
    while(l<r){
        if(nums[l]+nums[r] == k){
            op++,l++,r--;
        }
        else if(nums[l]+nums[r]<k){
            l++;
        }
        else r--;
    }

    cout<<op;


  return 0;
}
