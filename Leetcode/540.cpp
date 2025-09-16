#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {1,1,2,3,3,4,4,8,8};

    int lo = 0;
    int hi = nums.size()-1;

        while(lo<=hi){
            int mid = lo + ((hi-lo)/2);
            if(nums[mid-1] != nums[mid] and nums[mid+1] != nums[mid]){
                cout<<nums[mid];
                return 0; 
            }
            else if(nums[lo+1] == nums[lo]){
                lo = lo+1;
            }
            else{
                hi = hi-1;
            }
        }
    

    return 0;
}
