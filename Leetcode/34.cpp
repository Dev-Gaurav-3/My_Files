#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        int lp = -1;

        while(lo<=hi){
            int mid= lo + ((hi-lo)/2);
            if(nums[mid] == target){
                lp = mid;
                hi = mid-1;
            }
            else if(nums[mid]<target){
                lo = mid+1;
            }

            else{
                hi = mid-1;
            }
        }

        lo = 0;
        hi = nums.size()-1;
        int rp = -1;

        while(lo<=hi){
            int mid = lo+((hi-lo)/2);
            if(nums[mid] == target){
                rp =mid;
                lo = mid+1;
            }
            else if(nums[mid]>target){
                hi = mid-1;
            }

            else{
                lo = mid+1;
            }
        }
        vector<int>result;
        result.push_back(lp);
        result.push_back(rp);
        return result;

    }
};