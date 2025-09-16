#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>nums = {1,4,3,3,2};
    vector<int>v;

        for(int i = 0;i<nums.size();i++){
            int count = 1;
            int j = i;
            while(j<nums.size()-1 && nums[j]<nums[j+1]){
                count++;
                j++;
            }
            v.push_back(count);
        }
        for(int i = 0;i<nums.size();i++){
            int count = 1;
            int j = i;
            while(j<nums.size()-1 && nums[j]>nums[j+1]){
                count++;
                j++;
            }
            v.push_back(count);
        }
        auto m = max_element(v.begin(),v.end());

        cout<<*m;
    

    return 0;
}
