#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums = {2,5,7,8,9,2,3,4,3,1};
    int k = 3;

    for(int i = k-1;i<nums.size()-k-1;i++){
        int l = i,r = i+1;
        int run = k-1;
        bool flag1 = true;
        bool flag2 = true;
        while(run--){
            if(l>0 && nums[l] > nums[l-1]){
                l--;
            }
            else{
                flag1 = false;
                break;
            }
        }
        run = k-1;
        while (run--)
        {
            if(r<nums.size() && nums[r]<nums[r+1]){
                r++;
            }
            else{
                flag2 = false;
                break;
            }
        }
        if(flag1 && flag2){
            cout<<true;
            return true;
        }
    }
  return 0;
}
