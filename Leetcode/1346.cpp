#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>arr = {-10,12,-20,-8,15};
    sort(arr.begin(),arr.end());
        for(int i = 0; i < arr.size(); i++) {
            int t = arr[i]*2;
            int lo = 0, hi = arr.size() - 1; 
            
            while(lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if(arr[mid] == t) {
                    return 1;
                }
                else if(arr[mid] < t) {
                    lo = mid + 1;
                }
                else {
                    hi = mid - 1;
                }
            }
        }
    

    return 0;
}
