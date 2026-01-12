#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "aabaac";
    vector<int>cost = {1,2,3,4,1,10};

    unordered_map<char,int>mp;
    for(int i = 0;i<s.size();i++){
        mp[s[i]] += cost[i];
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto &x : mp){
        pq.push({x.second,x.first});
    }
    int ans = 0; 
    while(pq.size()>1){
        ans += pq.top().first;
        pq.pop();
    }
    cout<<ans;

  return 0;
}
