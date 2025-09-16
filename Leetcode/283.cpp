#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums = {0};
    vector<int>v;
    // if(nums.size()==1){
    //         return 0;
    //     }
        int zeroes = 0;
        for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==0){
            zeroes++;
        }
        else{
            v.push_back(nums[i]);
        }
    }
    nums.clear();
    for (int i = 0; i < v.size(); i++)
    {
        nums.push_back(v[i]);
    }
    for (int i = 0; i < zeroes; i++)
    {
        nums.push_back(0);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
