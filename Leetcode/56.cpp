#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>intervals = {
    {1,3},
    {2,6},
    {8,10},
    {15,18}
    };

    sort(intervals.begin(),intervals.end());

    vector<vector<int>>ans;
    for(int i = 0;i< intervals.size();i++){
        int num1 = intervals[i][0];
        int num2 = intervals[i][1];
        int j = i;
        while(j<intervals.size() && intervals[i][1] >= intervals[j][0]){
            num2 = max(num2, intervals[j][1]);
            j++;
        }
        ans.push_back({num1,num2});
    }


  return 0;
}
