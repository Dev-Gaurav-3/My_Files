#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int>arr= {100,100,100};

    int n =arr.size();
    vector<int>arr2;
    vector<int>ans;   

    for (int i = 0; i < n; i++)
    {
        arr2.push_back(arr[i]);
    } 

    for (int i = 0; i <n-1; i++)
    {   bool flag = false;
        for (int j = 0; j <n-i-1; j++)
        {
            if(arr2[j] > arr2[j+1]){
                flag = true;
                swap(arr2[j],arr2[j+1]);
                
            }
        }
        if(!flag) break;
    }



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr2[j])
            {
                ans.push_back(j+1);
                break;
            }            
        }
        
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
