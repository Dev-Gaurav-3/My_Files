#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {2,3,5,7};

    vector<int>ans;
    for (int i = 0; i < nums.size(); i++)
    {
        bool flag = false;
        for (int j = 1; j < nums[i]; j++)
        {
            if((j | (j+1)) == nums[i]){
                ans.push_back(j);
                flag = true;
                break;
            }
        }
        if(!flag) ans.push_back(-1);
    }
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    
    

  return 0;
}
