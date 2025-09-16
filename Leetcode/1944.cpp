#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){

    vector<int>h = {10,6,8,5,11,9};
    vector<int>ans;
    for(int i = 0;i<h.size()-2;i++){
        int topush =0;
        for(int j = i+1;j<h.size();j++){
            if(h[j]<h[j-1] && h[j]<h[i]){
                topush++;
            }
        }
        ans.push_back(topush);
    }

    ans.push_back(1);
    ans.push_back(0);

    for(auto ele:ans){
        cout<<ele<<" ";
    }

    return 0;
}
