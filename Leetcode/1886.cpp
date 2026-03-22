#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>mat = {{0,1},{1,0}};

    for(int i = 0;i<mat.size();i++){
        for(int j = i+1;j<mat.size();j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i = 0; i < mat.size(); i++) {
        reverse(mat[i].begin(), mat[i].end());
    }

    for(auto &x:mat){
        for(auto &y:x){
            cout<<y<<" ";
        }
        cout<< endl;
    }


    
    return 0;
}