#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "111000";

    int cnt1 = 0,ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1') cnt1++;
        else break;
    }
    if(cnt1 > 1) {
        s.erase(s.begin(),s.begin()+cnt1-1);
        s.append(cnt1-1,'1');
    }
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1]){
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
            ans++; 
        }
    }

    cout << ans << endl;
    
    

    return 0;
}