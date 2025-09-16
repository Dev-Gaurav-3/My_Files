#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 1;
    int l = 0;
    int r = arr.size() - 1;

    while (r - l + 1 > k)
    {
        if (abs(x - arr[l]) > abs(x - arr[r]))
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    vector<int> ans;
    for (int j = l; j <= r; j++)
    {
        ans.push_back(arr[j]);
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
