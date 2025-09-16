#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int> &nums2, int lo, int hi, int val)
{
    int max_dist = 0;
    int i = lo;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums2[mid] >= val)
        {
            max_dist = max(max_dist, mid - i);
            lo = mid + 1;
        }
        else if (nums2[mid] < val)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return max_dist;
}

int main()
{

    vector<int> nums1 = {30, 29, 19, 5};
    vector<int> nums2 = {25, 25, 25, 25, 25};

    int super_max = 0;
    for (int i = 0; i < nums1.size(); i++)
    {
        int lo = i;
        int hi = nums2.size() - 1;
        int val = nums1[i];

        int maxi = binary(nums2, lo, hi, val);

        super_max = max(maxi, super_max);
    }

    cout << super_max;

    return 0;
}
