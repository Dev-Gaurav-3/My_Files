#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums1 = {3, 4, 6, 5};
vector<int> nums2 = {9, 1, 2, 5, 8, 3};
int k = 5;

auto init = [](vector<int> v1, vector<int> v2, int k) {
    vector<int> ans;

    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());

    int x1 = 0, x2 = 0;

    while (ans.size() < k && (x1 < v1.size() || x2 < v2.size())) {
        if (x2 == v2.size() || (x1 < v1.size() && v1[x1] > v2[x2])) {
            ans.push_back(v1[x1]);
            x1++;
        } else {
            ans.push_back(v2[x2]);
            x2++;
        }
    }

    return ans;
};

vector<int> ans1 = init(nums1, nums2, k);
vector<int> ans2 = init(nums2, nums1, k);


    for (auto &&i : ans1)
    {
        cout<<i<<" ";
    }
    for (auto &&i : ans2)
    {
        cout<<i<<" ";
    }
    
    



  return 0;
}
