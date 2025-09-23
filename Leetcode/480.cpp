#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<double> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        priority_queue<int> pq;
        for (int j = 0; j < k; j++)
        {
            pq.push(nums[i]);
        }
    }

    return 0;
}
