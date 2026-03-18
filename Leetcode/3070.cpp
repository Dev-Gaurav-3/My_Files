#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>grid = {{7,6,3},{6,6,1}};
    int k = 18;

    int ans = 0;

    for (int i = 0; i < grid[0].size(); i++)
    {
        for (int j = 1; j < grid.size(); j++)
        {
            grid[j][i] += grid[j-1][i];
        }

    }

    for (int i = 0; i < grid.size(); i++)
    {
        int curr = 0;
        for (int j = 0; j < grid[0].size(); j++)
        {
            curr += grid[i][j];
            if(curr<=k) ans++;
            else break;
        }   
    }
    
    

    return 0;
}