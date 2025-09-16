#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>>v = {{1,2,3},
                            {4,5,6},
                            {7,8,9}}; 
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans += v[i][i];        
    }
    int i = 0;int j = v.size()-1;
    while(j != -1){
        ans += v[i][j];
        i++;j--;
    }
    int n = v.size()/2;
    if(v.size()%2 != 0){
        ans -= v[n][n];
    }

    cout<<ans;
    
    

    return 0;
}
