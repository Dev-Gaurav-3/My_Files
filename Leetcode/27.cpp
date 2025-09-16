#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>&nums, int val) {
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=val){
                continue;
            }
            else{
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        int k = nums.size();
        return k;        
    }