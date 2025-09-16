#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>>v = {{1,5,9},{10,11,13},{12,13,15}};
    int k = 8;

    vector<int>ans;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            ans.push_back(v[i][j]);
        }
    }

    sort(ans.begin(),ans.end());
    cout<<ans[k-1];

    return 0;
}
