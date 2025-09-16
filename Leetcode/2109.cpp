#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s = "icodeinpython";
    vector<int>v = {1,5,7,9};
    string ans = "";

    int j = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if(i == v[j]){
            ans.push_back(' ');
            j++;
        }
        ans.push_back(s[i]);
    }

    cout<<ans;
    return 0;
}
