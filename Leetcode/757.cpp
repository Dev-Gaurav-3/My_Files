#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>intervals = {{1,3},{1,4},{2,5},{3,5}};
    sort(intervals.begin(),intervals.end());

    for (int i = 0; i < intervals.size(); i++)
    {
        for (int j = 0; j < intervals[0].size(); j++)
        {
            cout<<intervals[i][j]<<" ";
        }
        cout<<"\n";
    }
    

  return 0;
}
