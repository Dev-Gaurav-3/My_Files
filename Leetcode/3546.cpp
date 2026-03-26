#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>grid  = {{1,4},{2,3}};

    int n = grid.size(), m = grid[0].size();

    long long lastColSum = 0;
    vector<long long> rowSum(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            rowSum[i] += grid[i][j];
        }
        lastColSum += rowSum[i];
    }

    long long curr = rowSum[0];
    for (int i = 1; i < n; i++)
    {
        if (curr == (lastColSum - curr)) return true;
        curr += rowSum[i];
    }

    long long lastRowSum = 0;
    vector<long long> colSum(m, 0);

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            colSum[j] += grid[i][j];
        }
        lastRowSum += colSum[j];
    }
    curr = colSum[0];
    for (int j = 1; j < m; j++)
    {
        if (curr == (lastRowSum - curr)) return true;
        curr += colSum[j];
    }

    return false; 

    
    return 0;
}