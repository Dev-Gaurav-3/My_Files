#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {-1,-100,3,99};
    int k = 2;
    vector<int>ans;
    int r_ptr = nums.size()-k;

    for(int i = r_ptr;i<nums.size();i++){
        ans.push_back(nums[i]);
    }
    for (int i = 0; i < r_ptr; i++)
    {
        ans.push_back(nums[i]);
    }
    
    for(auto ele:ans)
    {
        cout<<ele<<" ";
    }
    
    

    return 0;
}
