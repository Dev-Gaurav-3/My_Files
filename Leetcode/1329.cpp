#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix = {
        {3,3,1,1},
        {2,2,1,2},
        {1,1,1,2}   
    };

        for (int i = 0; i < matrix.size(); i++)
        {
            int j = 0,k = i;
            vector<int>v;
            while(j<matrix[0].size() && k < matrix.size()){
                v.push_back(matrix[k][j]);
                j++;k++;
            }
            sort(v.begin(),v.end());
            j = 0,k = i;
            int x = 0;
            while(j<matrix[0].size() && k < matrix.size()){
                matrix[k][j] = v[x];
                x++;
                j++;k++;
            }
        }
        for (int i = 0; i < matrix[0].size(); i++)
        {
            int j = i,k = 0;
            vector<int>v;
            while(j<matrix[0].size() && k < matrix.size()){
                v.push_back(matrix[k][j]);
                j++;k++;
            }
            sort(v.begin(),v.end());
            j = i,k = 0;
            int x = 0;
            while(j<matrix[0].size() && k < matrix.size()){
                matrix[k][j] = v[x];
                x++;
                j++;k++;
            }
        }

    for(auto &x:matrix){
        for(auto &y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    

  return 0;
}
