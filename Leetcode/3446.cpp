#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>>v = {
    {1,7,3},
    {9,8,2},
    {4,5,6}
    };

    vector<int>v1(5,1);
    v1.insert(v1.begin(),2);

    
    

    return 0;
}
