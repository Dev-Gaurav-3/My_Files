#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {1,3,1};

    vector<int>v;

    for (int i = 0; i <2; i++)
    {
        for (int j= i+1; j< 3; j++)
        {
            v.push_back(abs(arr[i]-arr[j]));
        }
        
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}