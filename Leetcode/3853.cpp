#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "abca";
    int k = 3;

    for (int i = 0; i < s.size(); i++)
    {
        int cnt = 0;
        for (int j = i+1; j < s.size(); j++)
        {
            if(s[i] == s[j] && j-i <= k){
                s.erase(s.begin()+j);
            }
        }
    }

    cout << s << endl;
    
    
    return 0;
}