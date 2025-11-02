#include<bits/stdc++.h>
using namespace std;

int main(){
    int m = 4,n = 6;
    vector<vector<int>>guards = {
        {0,0},
        {1,1},
        {2,3}
    };
    vector<vector<int>>walls = {
        {0,1},
        {2,2},
        {1,4}
    };

    vector<vector<int>> v(m,vector<int>(n,0)); // 0 = empty
    
    // mark walls = 3
    for(int i = 0; i < walls.size(); i++){
        v[walls[i][0]][walls[i][1]] = 3;
    }

    // mark guards = 2
    for(int i = 0; i < guards.size(); i++){
        v[guards[i][0]][guards[i][1]] = 2;
    }

    // spread vision = 1
    for(int i = 0; i < guards.size(); i++){
        int r = guards[i][0];
        int c = guards[i][1];

        // up
        for(int k = r-1; k >= 0; k--){
            if(v[k][c] == 3 || v[k][c] == 2) break;
            v[k][c] = 1;
        }

        // down
        for(int k = r+1; k < m; k++){
            if(v[k][c] == 3 || v[k][c] == 2) break;
            v[k][c] = 1;
        }

        // left
        for(int k = c-1; k >= 0; k--){
            if(v[r][k] == 3 || v[r][k] == 2) break;
            v[r][k] = 1;
        }

        // right
        for(int k = c+1; k < n; k++){
            if(v[r][k] == 3 || v[r][k] == 2) break;
            v[r][k] = 1;
        }
    }

    // print matrix
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[0].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    




  return 0;
}
