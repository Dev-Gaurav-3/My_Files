#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    vector<int>v = {1,2,3,1};
    unordered_map<int,int>m;

    for(int n:v){
        m[n]++;
    }

    for(auto n:m){
        if(n.second %2 == 0){
            return true;
        }
    }
    return false;

    return 0;
}
