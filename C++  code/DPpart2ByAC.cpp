#include <bits/stdc++.h>
using namespace std;

bool f(vector<int>nums,int tar){
    int n= nums.size();
    vector<vector<int>>dp(n+1,vector<int>(tar+1,0));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=tar;j++){
            if(nums[i-1]<=j){
                dp[i][j] = max(nums[i-1]+dp[i-1][j-nums[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j<=tar;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout << endl;
    }
    

    return dp[n][tar] == tar;
}

int main(){

    // Target Sum Subset //

    vector<int>nums = {4,2,7,1,3};
    int target = 7;

    cout << f(nums,target) << endl;
    
    return 0;
}