#include<iostream>
#include<vector>
using namespace std;

void f(vector<vector<int>>res,int index,vector<int>nums,vector<int>subset){

    if(index == nums.size()){
        res.push_back(subset);
        return ;
    }

    subset.push_back(nums[index]);
    f(res,index+1,nums,subset);

    subset.pop_back();
    f(res,index+1,nums,subset);

}

int main(){
    
    vector<int>nums = {1,2,3};
    vector<vector<int>>res;
    f(res,0,nums,{});

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[0].size(); j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
        
    }
    


    return 0;
}
