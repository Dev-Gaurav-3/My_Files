#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>hours = {12,12,30,24,24};
    vector<int>v(24,0);
        for(int i :hours){
            v[i%24]++;
        }
        int ans = 0;
        for(int i = 1;i<12;i++){
            ans += v[i]*v[24-i];
        }

        ans += (v[0]-(v[0]-1))/2;
        ans += (v[24]-(v[24]-1))/2;

        return ans;
    

    return 0;
}
