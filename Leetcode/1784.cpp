#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "1001";

    int min_i = s.size(),max_i = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1'){
            min_i = min(i,min_i);
            max_i = max(i,max_i);
        }
    }

    for (int i = min_i; i <= max_i; i++)
    {
        if(s[i] == '0') return false;
    }
    return true;
    
    
    
    return 0;
}