#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>mat = {{1,0,0},{0,1,0},{0,0,1}};

    int ans = 0;
    for (int i = 0; i < mat[0].size(); i++)
    {
        for (int j = 1; j < mat.size(); j++)
        {
            mat[j][i] += mat[j-1][i];
        }
    }
    for (int i = 0; i < mat[0].size(); i++)
    {
        if(mat[mat.size()-1][i] == 1) ans++;
    }
    
    cout << ans << endl;
    
    return 0;
}