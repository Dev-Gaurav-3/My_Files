#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long>nums = {3,1,1,2};
    stack<long long>st;
    for (int i = 0; i < nums.size(); i++)
    {
        if(st.empty()){
            st.push(nums[i]);
        }
        else{
            while(st.top() == nums[i]){
                st.top() += nums[i];
            }
        }
    }
    vector<long long>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    
    return 0;
}