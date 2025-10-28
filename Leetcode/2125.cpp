#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>bank = {"000","111","000"};
    int prev_ones = 0;
    int ans = 0;
    for(string s : bank){
        int ones = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '1') ones++;
        }
        if(ones>0){
            ans += ones*prev_ones;
            prev_ones = ones;
        }
    }
    cout<<ans;
  return 0;
}
