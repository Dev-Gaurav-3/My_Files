#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {4,3,2,7,8,2,3,1};
    vector<int>v(nums.size(),0);
        for(auto ele:nums){
            v[ele-1]++;
        }
        vector<int>ans;
        for(int i = 1;i<nums.size();i++){
            if(v[i] == 0) ans.push_back(i);
        }



    return 0;
}
