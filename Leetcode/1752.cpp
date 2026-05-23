#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {3,4,5,1,2};
    int min_i = 0;
    for(int i = 1;i<nums.size();i++){
        if(nums[i]<nums[min_i]) min_i = i;
    }
    vector<int>temp;
    for(int i = min_i;i<nums.size();i++){
        temp.push_back(nums[i]);
    }
    for(int i = 0;i<min_i;i++){
        temp.push_back(nums[i]);
    } 
    return 0;
}