#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {0, 1, 2, 3, 4};
    vector<int> nums = {0, 1, 3, 4};

    int ans = 0;
    int j = -1;
    for (int i = 0; i < v.size(); i++)
    {
        j++;
        if (v[i] != nums[j])
        {
            ans++;
            j--;
        }
    }

    return 0;
}
