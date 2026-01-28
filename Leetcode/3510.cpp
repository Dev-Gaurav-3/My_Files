#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,2,2};

    stack<int>st;
    int ans = 0;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if(st.empty()) st.push(nums[i]);
        else{
            while(i>= 0 && st.top() < nums[i]){
                st.top() += nums[i];
                i++;
                ans++;
            }
            i--;
        }
    }

    cout<< ans <<endl;
    

  return 0;
}
