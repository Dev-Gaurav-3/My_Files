#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {2,1,5};
    int k = 2;

    sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int maxLen = 0;
        
        for (int j = 0; j < n; j++) {
            while ((long long)nums[j] > (long long)nums[i] * k) {
                i++;
            }
            maxLen = max(maxLen, j - i + 1);
        }
        
        return n - maxLen;


  return 0;
}
