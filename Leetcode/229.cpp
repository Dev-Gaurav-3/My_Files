#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int,int>m1;
    vector<int>v = {1,2};
    vector<int>ans;

    for (int i = 0; i < v.size(); i++)
    {
        m1[v[i]]++;
    }
    int n = v.size()/3;

    for(auto ele:m1){
        if(ele.second > n){
            ans.push_back(ele.first);
        }
    }

    for(int ele:ans){
        cout<<ele<<" ";
    }

    return 0;
}
