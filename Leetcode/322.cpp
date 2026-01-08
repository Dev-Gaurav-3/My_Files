#include<bits/stdc++.h>
using namespace std;

int f(vector<int>&nums,int a,int n){
    if(a == 0) return 0;
    if(a<0 || n<0) return 1e9;

    int take = 1 + f(nums,a-nums[n],n);
    int skip = f(nums,a,n-1);
    
    return min(take,skip);
}

int main(){
    vector<int>nums = {1,2,5};
    int a = 11;

    cout<<f(nums,a,nums.size()-1);

  return 0;
}
