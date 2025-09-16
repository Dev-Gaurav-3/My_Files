#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> mostCompetitive(vector<int> &nums, int k)
{
    stack<int> st;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && nums[i] < st.top())
        {
            while (!st.empty() && nums[i] < st.top() && n - i - 1 >= k - st.size())
                st.pop();
        }
        if (st.size() < k)
        {
            st.push(nums[i]);
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    vector<int> nums = {2, 4, 3, 3, 5, 4, 9, 6};
    int k = 4;

    mostCompetitive(nums, k);

    return 0;
}
