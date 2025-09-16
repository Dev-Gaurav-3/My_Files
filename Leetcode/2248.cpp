#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    vector<vector<int>>nums = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};
    vector<int>ans;
    unordered_map<int,int>m;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[0].size(); j++)
        {
            m[nums[i][j]]++;
        }
    }

    for (auto ele:m)
    {
        if(ele.second == nums.size()){
            ans.push_back(ele.first);
        }
    }
    
    
       

    

    return 0;
}
