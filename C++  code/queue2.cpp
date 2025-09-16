#include<iostream>
#include<deque>
#include<vector>
using namespace std;

void max_window(vector<int>&v,int k){
    deque<int>d;
    vector<int>ans;
    for (int i = 0; i < k; i++)
    {
        while(not d.empty() and  v[d.back()]<v[i]){
            d.pop_back();
        }
        d.push_back(i);
    }
    ans.push_back(v[d.front()]);
    for (int i = k; i < v.size(); i++)
    {
        int curr = v[i];
        if(d.front() == i-k){
            d.pop_front();
        }
        while(not d.empty() and  v[d.back()]<v[i]){
            d.pop_back();
        }
        d.push_back(i);
        ans.push_back(v[d.front()]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
     
}

int main(){

    // DEQUE => double ended queue //
    // deque<int>d;

    // d.push_back(10);
    // d.push_back(20);
    // d.push_back(30);
    // d.push_front(0);
    // d.push_front(-10);

    // while(!d.empty()){
    //     cout<<d.front()<<" ";
    //     d.pop_front();
    // }


    // Q) leetcode Q-239;
    vector<int>v = {1,3,-1,-3,5,3,6,7};
    int k = 3;

    max_window(v,k);

    

    return 0;
}
