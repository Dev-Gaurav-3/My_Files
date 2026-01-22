#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {2,3,5,7};

    vector<int>ans;
    for (int i = 0; i < nums.size(); i++)
    {

        if(nums[i]&1){
            int n = nums[i];
            ans.push_back(n - ((n+1) & (-n-1))/2);
        }
        else ans.push_back(-1);
    }
    
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    
    

  return 0;
}
