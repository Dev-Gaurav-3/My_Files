#include<iostream>
#include<vector>
using namespace std;

int main(){

    int k = 3;

    vector<int>v = {1,3,-1,-3,5,3,6,7};
    vector<int>ans;
    for (int i = 0; i <= v.size()-k; i++)
    {   
        int max = v[i];
        for (int j = i; j < k+i; j++)
        {
            if(v[j]>max){
                max = v[j];
            }
        }
        ans.push_back(max);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    

    return 0;
}
