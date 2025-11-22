#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,2,3,4};
    int ans = 0;
    for(int i : nums){
        if(i%3 != 0){
            ans++;
        }
    }

  return 0;
}
