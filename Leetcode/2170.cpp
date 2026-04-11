#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums = {3,1,3,2,4,3};

    if(nums.size() < 3) return 0;

        unordered_map<int,int> even, odd;

        for(int i = 0; i < nums.size(); i++) {
            if(i&1) odd[nums[i]]++;
            else even[nums[i]]++;
        }
        int e1 = -1, e2 = -1, f1 = 0, f2 = 0;
        for(auto &[a,b] : even){
            if(b > f1){
                e2 = e1; f2 = f1;
                e1 = a;  f1 = b;
            } else if(b > f2){
                e2 = a; f2 = b;
            }
        }

        int o1 = -1, o2 = -1, f3 = 0, f4 = 0;
        for(auto &[a,b] : odd){
            if(b > f3){ 
                o2 = o1; f4 = f3;
                o1 = a;  f3 = b;
            } else if(b > f4){
                o2 = a; f4 = b;
            }
        }

        int n = nums.size();

        if(e1 != o1){
            return n - f1 - f3;
        }

        int option1 = n - f1 - f4;
        int option2 = n - f2 - f3;

        return max(0, min(option1, option2));
    
     return 0;
}