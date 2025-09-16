#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> people = {3, 2, 2, 1};
    int limit = 3;

    sort(people.begin(), people.end());
    int i = 0, j = people.size() - 1;
    int ans = 0;
    while (i <= j)
    {
        if (people[i] + people[j] <= limit)
        {
            i++;
        }
        j--;
        ans++;
    }

    cout << ans;
    return 0;
}
