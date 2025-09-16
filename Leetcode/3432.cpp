#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v = {10,10,3,7,6};
    
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i-1];
    }

    int ans = 0;

    for (int i = 0; i < v.size()-1; i++)
    {
        int k = v[v.size()-1]-2*v[i];
        if(k == 0) continue;
        if(k%2 == 0){
            ans++;
        }
    }


    cout<<ans;
    
    
    
    

    return 0;
}
