#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {3,2,2,5,4};
    for (int k = nums.size(); k>=2; k--)
    {   unordered_map<int,int>even,odd;
        for (int i = 0; i < k; i++)
        {
            if(nums[i]&1) odd[nums[i]]++;
            else even[nums[i]]++;
        }
        if(even.size() == odd.size()) return k;
        else{
            for (int i = k; i < count; i++)
            {
                /* code */
            }
            
        }
        
    }
    

  return 0;
}
