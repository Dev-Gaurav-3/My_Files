#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "10203004";
    vector<vector<int>>queries = {
        {0,7},{1,3},{4,6}
    };
    vector<int>prefix(s.size());
    prefix[0] = s[0] - '0';
    for (int i = 1; i < s.size(); i++)
    {
        prefix[i] = prefix[i-1] + (s[i] - '0');
    }

    for (auto &&i : prefix)
    {
        cout << i << endl;
    }
    
    

    return 0;
}