#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {0,1,1,1,0,1,1,0,1};

    int l = 0,r = 0;
    int cnt = 0;
    int temp = 0;
    int maxi = INT_MIN;
    while(l<=r && r<nums.size()){
        if(r < nums.size() && nums[r] == 0)cnt++;
        if(cnt<=1){
            r++;
        }
        else{
            l++;
            r = l;
            cnt = 0;
        }
        temp = r-l;
        maxi = max(temp,maxi);
    }

    cout<<maxi;

  return 0;
}