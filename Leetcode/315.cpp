#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {5,2,6,1};
    vector<int>ans;
    
    int n;

    for (int i = 0; i < nums.size()-1; i++)
    {
        n = 0;
        for (int j = i+1; j < nums.size(); j++)
        {
            if(nums[i]<nums[j]){
                n++;
            }
        }
        ans.push_back(n);
        
    }
    
    

    return 0;
}
