#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {21, 4, 7};
    
    int ans = 0;
    for (int i : nums) {
        int cnt = 2;
        int sum = 1 + i;

        for (int j = 2; j * j <= i && cnt <= 4; j++) {
            if (i % j == 0) {
                if (j == i / j) {
                    cnt += 1;
                    sum += j;
                } else {
                    cnt += 2;
                    sum += j + i / j;
                }
            }
        }

        if (cnt == 4) {
            ans += sum;
        }
    }

    cout << ans;
    return 0;
}
