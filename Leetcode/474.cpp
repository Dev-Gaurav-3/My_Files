#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>strs = {"10","1","0"};
    int m = 1,n = 1;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(string s : strs){
        int zeroes = 0,ones = 0;
        for(char ch:s){
            if(ch == '0') zeroes++;
            else ones++;
        }
        pq.push({zeroes,ones});
    }
    int zeroes = 0,ones = 0,ans= 0;
    while(!pq.empty()){
        if(zeroes+pq.top().first <= m && ones+pq.top().second <=n){
            zeroes += pq.top().first;
            ones += pq.top().second;
            ans++;
        }
        pq.pop();
    }

    cout<<ans;

    

  return 0;
}
