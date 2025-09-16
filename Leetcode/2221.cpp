#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {1,2,3,4,5};
    vector<int>nums2;

    while(nums.size() != 1){
        for(int i = 0;i<nums.size();i++){
            if(i == 0){
                int sum = nums[i] + nums[i+1];
                if(sum>9) nums.push_back(sum%10);
                else{
                    nums2.push_back(sum);
                }
            }   
            else{
                int sum = nums[i]+nums[i+1] - nums[i-1];
                if(sum>9) nums.push_back(sum%10);
                else{
                    nums2.push_back(sum);
                }
            }
        }
        nums.clear();
        nums = nums2;
        nums2.clear();
    }

    cout<<nums[0];

    return 0;
}
