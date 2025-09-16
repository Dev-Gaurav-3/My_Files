#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{

    vector<int> A = {1, 3, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    vector<int> B = {3, 1, 2, 4, 6, 5, 8, 7, 9, 10, 11, 13, 12, 14, 16, 15, 18, 17, 19, 20, 22, 21, 26, 25, 24, 23, 27, 28, 29, 30};
    vector<int> C;
    unordered_map<int, int> mp;
    for (int i = 0; i < A.size(); i++)
    {
        mp[A[i]]++;
        mp[B[i]]++;
        int count = 0;
        for (auto ele : mp)
        {
            if (ele.second == 2)
            {
                count++;
            }
        }
        C.push_back(count);
    }

    for (int i : C)
    {
        cout << i << " ";
    }

    return 0;
}
