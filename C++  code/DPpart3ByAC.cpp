#include <bits/stdc++.h>
using namespace std;

void maxProfit(vector<int>&profit,vector<int>&length,int rodLength){
    int n = length.size();
    vector<vector<int>>dp(n+1,vector<int>(rodLength+1,0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= rodLength; j++)
        {
            if(length[i-1] <= j){
                dp[i][j] = max(profit[i-1]+dp[i][j-length[i-1]],dp[i-1][j]); 
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[n][rodLength] << endl;
}

int LCS(string s1,string s2,vector<vector<int>>dp){
    int n = s1.size(),m = s2.size();
    if(n == 0 || m == 0) return 0;

    if(dp[n][m] != -1) return dp[n][m];

    if(s1[n-1] == s2[m-1]){
        dp[n][m] = 1 + LCS(s1.substr(0,n-1),s2.substr(0,m-1),dp);
    }
    else{
        int ans1 =  LCS(s1.substr(0,n-1),s2,dp);
        int ans2 =  LCS(s1,s2.substr(0,m-1),dp);

        dp[n][m] =  max(ans1,ans2);
    }

    return dp[n][m]; 
}

int main(){

    // Rod Cutting
    // Cut rod into pieces to get maxProfit from pieces. Possible pieces are always of len 1 to n.
    // vector<int>profit = {1,5,8,9,10,17,17,20};
    // vector<int>length = {1,2,3,4,5,6,7,8};
    // int rodLength = 8;
    // maxProfit(profit,length,rodLength);

    // Longest Common Subsequence // 

    string s1 = "abcgde",s2 = "abedg";
    int n = s1.size(),m = s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    cout << LCS(s1,s2,dp) << endl;




    
    return 0;
}