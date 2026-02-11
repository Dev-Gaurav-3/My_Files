#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,2,3,3,4,4,5,6};
    int k = 4;

    if(nums.size() % k != 0) return false;

        map<int,int> mp;
        for(int i : nums) mp[i]++;

        while (!mp.empty()) {
            auto itr = mp.begin();
            int cnt = itr->first;

            for(int i = 0; i < k; i++) {
                if (itr == mp.end() || itr->first != cnt)
                    return false;

                itr->second--;
                if (itr->second == 0)
                    itr = mp.erase(itr);
                else
                    ++itr;

                cnt++;
            }
        }
}
