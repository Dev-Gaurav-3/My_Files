#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>ideas = {"coffee","donuts","time","toffee"};

    unordered_map<string,int>mp;
    for (auto &i : ideas)
    {
        mp[i]++;
    }
    long long ans = 0;
    for (int i = 0; i < ideas.size(); i++)
    {
        for (int j = i+1; j < ideas.size(); j++)
        {
            string s1 = ideas[i];
            string s2 = ideas[j];
            swap(s1[0],s2[0]);
            if(mp.count(s1) && mp.count(s2)) ans++;
        }
    }

    cout<< ans <<endl;
    
    
    

  return 0;
}
