#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2};
    int k = 3;
    int multiplier = 4;

    while (k--)
    {
        int min = nums[0];
        int j = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if(min > nums[i]){
                min = nums[i];
                j = i;
            }
            else{
                continue;
            }
        }
        nums[j] *= multiplier;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}
