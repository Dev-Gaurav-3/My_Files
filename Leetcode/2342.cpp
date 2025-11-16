#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {18,43,36,13,7};
    
    unordered_map<int,int>mp;
    for(int i : nums){
        int n = i;
        int ans = 0;
        while(n>0){
            ans *= 10;
            ans += n%10;
            n /= 10;
        }
        mp[ans]++;
    }
    

  return 0;
}
