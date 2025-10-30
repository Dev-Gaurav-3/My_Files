#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {-1,1,0,-3,3};
    int zeroes = 0;
    long long into = 1;
    for(int i = 0;i<nums.size();i++){
        into *= nums[i];
        if(nums[i] == 0) zeroes++;
    }
    int sec_into = 1;
    if(zeroes == 1){
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0) continue;
            sec_into *= nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0) nums[i] = sec_into;
            else{
                nums[i] = into / nums[i];
            }
        }
        return nums;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0) nums[i] = into;
        else{
            nums[i] = into / nums[i];
        }
    }
    return nums;
  return 0;
}
