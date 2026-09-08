#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    long long countAmounts(long long x, vector<int>& coins) {
        
        int n = coins.size();
        long long ans = 0;
        
        for (int mask = 1; mask < (1 << n); mask++) {
            
            long long LCM = 1;
            int bits = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    bits++;
                    LCM = lcm(LCM, coins[i]);                    
                    if (LCM > x)
                    break;
                }
            }
            
            if (LCM > x) continue;
            if (bits&1) ans += x / LCM;
            else ans -= x / LCM;
        }
        
        return ans;
    }
    
    
    long long findKthSmallest(vector<int>& coins, int k) {
        
        long long lo = 1;
        long long hi = 1e18;
        
        while (lo < hi) {
            
            long long mid = lo + (hi - lo) / 2;
            
            if (countAmounts(mid, coins) >= k)
            hi = mid;
            else
            lo = mid + 1;
        }
        
        return lo;
    }
};

int main(){
    
    return 0;
}