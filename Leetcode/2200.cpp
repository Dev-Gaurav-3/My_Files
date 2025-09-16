#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {3,4,9,1,3,9,5};
    int k = 1;
    int key = 9;

    vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                int n = abs(i-j);
                if(n<=k && nums[j] == key){
                    ans.push_back(i);
                }
            }
        }

        for(auto ele:ans){
            cout<<ele<<" ";
        }

    return 0;
}
