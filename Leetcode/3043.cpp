#include <bits/stdc++.h>
using namespace std;

unordered_map<string,int>mp;
void f1(string s){
    string curr = "";
    for (int i = 0; i < s.size(); i++)
    {
        curr += s[i];
        mp[curr]++;
    }
}
int ans = 0;

void f2(string s){
    string curr = "";
    for (int i = 0; i < s.size(); i++)
    {
        curr += s[i];
        if(mp.count(curr)){
            ans = max(ans,(int)curr.size());
        }
    }
}

int main(){
    vector<int>arr1 = {1,10,100};
    vector<int>arr2 = {1000};

    for (int i = 0; i < arr1.size(); i++)
    {
        f1(to_string(arr1[i]));
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        f2(to_string(arr2[i]));
    }
    
    return ans;


    return 0;
}