#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,2,3};

    sort(nums.begin(),nums.end());
    int mini = nums[0];
    int n = nums.size()-1;
    for(int i = 1;i<=n;i++){
        if(nums[i] == mini) return 0;
    }
    int ans = 1;
    while(n>0){
        ans *= n;
        n--;
    }

  return 0;
}
