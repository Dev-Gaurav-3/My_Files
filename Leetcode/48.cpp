#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    reverse(matrix.begin(),matrix.end());

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    

    for(auto &x : matrix){
        for(auto &y : x){
            cout<<y<<" ";
        }        
        cout<<endl;
    }

  return 0;
}
