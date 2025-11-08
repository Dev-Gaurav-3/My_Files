#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>values = {2,6,3,6,5};
    vector<int>labels = {1,1,2,1,1};
    int numWanted = 3;
    int useLimit = 1;

    priority_queue<pair<int,int>>pq;
    unordered_multimap<int,int>mp;
    for(int i = 0;i<values.size();i++){
        mp.insert({values[i],labels[i]});
    }

    for(auto ele:mp){
        pq.push({ele.first,ele.second});
    }
    int ans = 0;
    int prev_label = INT_MIN;
    unordered_map<int,int>mp2;
    while(!pq.empty() && numWanted){
        if(pq.top().second != prev_label && mp2[pq.top().second]<useLimit){
            ans += pq.top().first;
            prev_label = pq.top().second;
            numWanted--;
            mp2[pq.top().second]++;
        }
        else if(prev_label == pq.top().second && mp2[pq.top().second]<useLimit){
            ans += pq.top().first;
            prev_label = pq.top().second;
            numWanted--;
            mp2[pq.top().second]++;
        }
        pq.pop();
    }

  return 0;
}
