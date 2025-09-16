#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){

    vector<int>nums = {1,13,10,12,31};
    
    vector<string>v;
        for(auto ele:nums){
            v.push_back(to_string(ele));
        }
        for(int i = 0;i<v.size();i++){
            string original = v[i];
            string reversed = original;
            reverse(reversed.begin(),reversed.end());
            nums.push_back(stoi(reversed));
        }
        unordered_map<string,int>m;
        for(auto ele:nums){
            m[ele]++;
        }

        cout<<m.size()-1;
    return 0;
}
