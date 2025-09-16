#include<iostream>
#include<vector>
using namespace std;

bool binary(vector<int>&v,int target){
    int lo = 0;
    int hi = v.size()-1;

    while (lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(v[mid] == target) return true;

        else if(v[mid]<target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return false;
    
}

int main(){

    vector<vector<int>>matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 20;
    int i = 0;
    int j = matrix[0].size()-1;
    bool ans = false;

    for (int k = 0; k < matrix.size(); k++)
    {
        if(matrix[k][i]<=target and matrix[k][j]>=target){
            ans = binary(matrix[k],target);
        }
        if(ans){
            cout<<"True";
            return 0;
        }
    }    

    return 0;
}
