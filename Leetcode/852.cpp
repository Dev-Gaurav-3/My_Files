#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>&v){
    int lo = 0,hi = v.size()-1;
    while (lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(v[mid]<v[mid-1] && v[mid]>v[mid+1]){
            return mid;
        }
        else if(v[mid-1] < v[mid]){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>nums = {0,10,5,2};
    cout<<binary(nums);
  return 0;
}
