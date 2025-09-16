#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){

    int limit = 4;
    map<int,int>m;
    vector<vector<int>>v = {
    {1,4},
    {2,5},
    {1,3},
    {3,4}
    };

    for (int i = 0; i < v.size(); i++) {
        m[v[i][0]] = v[i][1];
    }

    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    

    return 0;
}
