#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,1,1,1,1};

    vector<int>v2;

    for (int i = 0; i < v.size(); i++)
    {
        if(i == 0){
            v2.push_back(v[i]);
        }
        else{
            v2.push_back(v[i]+v2[i-1]);
        }
    }

    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    
    
    

    return 0;
}
