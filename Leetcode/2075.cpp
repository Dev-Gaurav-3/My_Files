#include <bits/stdc++.h>
using namespace std;

int main(){

    string encodedText = "iveo    eed   l te   olc";
    int rows = 4;

    int m = encodedText.size()/rows;
    vector<vector<char>>v(rows,vector<char>(m));
    int cnt = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v[i][j] = encodedText[cnt++];
        }
    }
    string ans = "";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0,k = i; j < rows && k < m; j++,k++)
        {
            ans += v[j][k];
        }
    }
    while (!ans.empty() && ans.back() == ' ') {
        ans.pop_back();
    }
    
    cout << ans << endl;
    
    return 0;
}