#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>numbers = {2,3,4};
    int target = 6;
    vector<int>ans;
        for(int i = 0;i<numbers.size();i++){
        int t = target-numbers[i];
        int lo = 0;
        int hi = numbers.size()-1;
        while(lo<=hi){
            int mid = lo+((hi-lo)/2);
            if(numbers[mid] == t){
                ans.push_back(i+1);
                ans.push_back(mid+1);
                return 0;
            }
            else if(numbers[lo]<t){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
    }
    return 0;
}