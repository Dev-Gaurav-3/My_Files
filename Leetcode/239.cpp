#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){

    int k = 3;
    vector<int>nums = {1,3,-1,-3,5,3,6,7};

    deque<int>dq;
    for(int i = 0;i<k;i++){
        while (dq.size()>0 && nums[dq.back()]<=nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    vector<int>ans;
    for (int i = k; i < nums.size(); i++)
    {
        ans.push_back(nums[dq.front()]);
        
        while (dq.size()>0 && dq.front()<= i-k)
        {
            dq.pop_front();
        }
        while(dq.size()>0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(dq.front());
    
    for(auto &x:ans){
        cout<<x<<" ";
    }
    
    
    

    return 0;
}
