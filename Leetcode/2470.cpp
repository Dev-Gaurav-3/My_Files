#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){

    vector<int>nums = {3,6,2,7,1};
    int k = 6;

    int count = 0;
        for(int i = 0;i<nums.size();i++){
            int l = 1;
            for(int j = i;j<nums.size();j++){
                l = lcm(l,nums[j]);
                if(l == k) count++;
                if(l>k) break;
            }
            l = 1;
        }

    

    return 0;
}
