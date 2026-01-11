#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {8,4,1,2};
    int k = 7,m = 3;

    sort(nums.begin(),nums.end());

    int x = nums.size()-1;
    while (x-m>=0)
    {
        int calc = nums[x]*m;
        for (int i = x-1; i >= x-m+1; i--)
        {
            calc -= nums[i];
        }
        calc = nums[x];
        if(calc <= k){
            for (int i = x-1; i >= x-m+1; i--)
            {
                k -= (calc-nums[x]);
            }
            int ans = nums[x];
            while(k >= m){
                ans++;
                k -= m;
            }
        }
        x--;
    }
    
    

  return 0;
}
