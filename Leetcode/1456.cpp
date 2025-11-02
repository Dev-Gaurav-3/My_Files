#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "zsjajrixtiohfgkaho";
    int k = 4;

    
    int ans = 0;
    int curr_vow = 0;
    string curr_s = "";
    for(int i = 0;i<k;i++){
        curr_s += s[i];
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            curr_vow++;
        }
    }
    ans = curr_vow;
    for(int i = k;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            curr_vow++;
        }
        curr_s += s[i];
        if(curr_s[0] == 'a' || curr_s[0] == 'e' || curr_s[0] == 'i' || curr_s[0] == 'o' || curr_s[0] == 'u'){
            curr_vow--;
        }
        curr_s.erase(curr_s.begin());
        ans = max(curr_vow,ans);
        if(ans == k) return ans;
    }
    cout<<ans;

    return ans;


  return 0;
}
