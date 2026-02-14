#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abbac";
    int mx = 1;
    for (int i = 0; i < s.size(); i++)
    {
        vector<int>v(26,0);
        for (int j = i; j < s.size(); j++)
        {
            v[s[j] - 'a']++;
            int freq = v[s[j] - 'a'];
            bool flag = true;
            for (int k = 0; k < 26; k++)
            {
                if(v[k]!= 0 && v[k] != freq){flag = false;break;}
            }
            if(flag) mx = max(mx,j-i+1);
        }
    }
    cout<< mx <<endl;

  return 0;
}
