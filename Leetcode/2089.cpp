#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {1,2,5,2,3};
    vector<int>v;
    int ans = -1;
    int target = 5;

    sort(nums.begin(),nums.end());

    int lo = 0;
    int hi = nums.size()-1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid] == target){
            ans = mid;
            hi = mid-1;
        }
        else if(nums[mid]>target){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }

    for (int i = ans; i <nums.size(); i++)
    {
        if(nums[i] == target){
            v.push_back(i);
        }
        else{
            break;
        }
    }

    for(int num:v){
        cout<<num<<" ";
    }   
    

    return 0;
}
