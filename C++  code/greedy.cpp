#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

struct Item
{
    int wt;
    int val;
};

bool compare(Item i1, Item i2)
{

    double v_w_i1 = static_cast<double>(i1.val) / i1.wt;
    double v_w_i2 = static_cast<double>(i2.val) / i2.wt;
    return v_w_i1 > v_w_i2;
}

double fractional(int W, vector<Item> &items)
{
    double ans = 0;
    sort(items.begin(), items.end(), compare);
    for (const auto &item : items)
    {
        if (item.wt <= W)
        {
            ans += item.val;
            W -= item.wt;
        }
        else
        {
            double fraction = static_cast<double>(W) / item.wt;
            ans += fraction * item.val;
            W = 0;
        }
    }
    return ans;
}

int main()
{
    // int n, W;
    // cin >> n >> W;

    // vector<Item> items;

    // for (int i = 0; i < n; i++)
    // {
    //     int v, w;
    //     cin >> v >> w;
    //     Item it;
    //     it.val = v;
    //     it.wt = w;

    //     items.push_back(it);
    // }

    // cout << fractional(W, items);

    return 0;
}
