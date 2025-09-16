#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> hours = {9, 9, 6, 0, 6, 6, 9};

    vector<int> v(hours.size(), -1);

    for (int i = 0; i < hours.size(); i++)
    {
        if (hours[i] > 8)
        {
            v[i] = 1;
        }
        if (i == 0)
            continue;
        else
        {
            v[i] += v[i - 1];
            cout << v[i] << " ";
        }
    }

    auto maxi = max_element(v.begin(), v.end());

    cout << *maxi;

    return 0;
}
