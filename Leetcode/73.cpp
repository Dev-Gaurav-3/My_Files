#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){

    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    set<pair<int,int>>m;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if(matrix[i][j] == 0){
                m.insert({i,j});
            }            
        }
    }

    for(auto ele:m){
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][ele.second] = 0;
        }
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[ele.first][j] = 0;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



    


    return 0;
}
