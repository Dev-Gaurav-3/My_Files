#include <bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,vector<vector<int>>&dp){
    int maxi = 0;
    for (int i = 1; i <= s1.size(); i++)
    {
        for (int j =1; j <= s2.size(); j++)
        {
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 +dp[i-1][j-1];
                maxi = max(maxi,dp[i][j]);
            }
        }
    }
    return maxi;
    
}

int main(){

    // Longest common substring //
    string s1 = "abcde",s2 = "abcde";
    vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,0));

    cout << LCS(s1,s2,dp) << endl;

    
    return 0;
}