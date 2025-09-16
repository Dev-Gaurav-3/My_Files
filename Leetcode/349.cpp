#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    
    vector<int>v1 = {1,2,2,1};
    vector<int>v2 = {2,2};
    vector<int>ans;
    unordered_map<int,int>m1;
    unordered_map<int,int>m2;

    for (auto ele:v1)
    {
        m1[ele]++;
    }
    for (auto ele:v2)
    {
        m2[ele]++;
    }

    for(auto ele1:m1){
        for(auto ele2:m2){
            if(ele1.first == ele2.first and ele1.second>0 and ele2.second>0){
                ans.push_back(ele1.first);
            }
        }
    }

    for(auto ele:ans){
        cout<<ele<<" ";
    }
    

    return 0;
}
