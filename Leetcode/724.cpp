#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,2,3};

    vector<int>prefix = nums;
    for(int i = 1;i<nums.size();i++){
        nums[i] = nums[i]+nums[i-1];
    }
    for(int i = 0;i<nums.size();i++){
        int right = 0,left = 0;
        if(i > 0){
            left = nums[i-1];
        }
        if(i<nums.size()-1){
            right = nums[nums.size()-1]-nums[i];
        }
        if(left == right){
            return i;
        }
    }



  return 0;
}
