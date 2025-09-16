#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>nums = {1,10000000};
    vector<int>ans;
    sort(nums.begin(),nums.end());

    int i = 0;
    int j = 1;

    while(j<nums.size()){
        long long n = nums[j]-nums[i];
        ans.push_back(n);
        i++;j++;
    }

    int max = ans[0];

    for (int k = 0; k < ans.size(); k++)
    {
        if(ans[k] > max){
            max = ans[k];
        }
    }
    
    cout<<max;

    return 0;
}
