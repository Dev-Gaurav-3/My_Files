#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "00110110";
    int k = 2;

    unordered_set<string>st;
    for (int i = 0; i < s.size()-k; i++)
    {
        st.insert(s.substr(i,k));
    }

    cout << ((1LL<<k)==st.size())  << endl;
    

    return 0;
}