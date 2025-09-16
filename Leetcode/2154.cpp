#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {8,19,4,2,15,3};
    bool flag = true;
    int n = 2;
    while (flag)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if(n == nums[i]){
                n *= 2;
                flag = true;
                break;
            }
            else{
                flag = false;
            }
        }
    }

    cout<<n;
    

    return 0;
}
