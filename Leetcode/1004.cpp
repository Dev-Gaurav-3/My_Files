#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;

    queue<int>q;
    int ans = 0;
    int zeroes = 0;
    for(int i = 0;i<nums.size();i++){
        if(nums[i] == 0){
            zeroes++;
            if(zeroes<=k){
                q.push(0);
            }
            else{
                while(zeroes>k){
                    if(q.front() == 0) zeroes--;
                    q.pop();
                }
                zeroes--;
            }
        }
        else{
            q.push(1);
        }
        ans = max((int)q.size(),ans);
    }

    cout<<ans;


  return 0;
}
