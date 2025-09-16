#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>nums = {4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11};
    int k = 2;
    vector<vector<int>>v;
    sort(nums.begin(),nums.end());

    // for(int i = 0;i<nums.size();i += 3){
    //     if()
    // }
    
    for(auto ele:nums){
        cout<<ele<<" ";
    }

    return 0;
}
