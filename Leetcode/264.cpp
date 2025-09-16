#include <iostream>
#include <vector>
using namespace std;

bool isUgly(int n)
{
    while (n % 2 == 0)
        n /= 2;
    while (n % 3 == 0)
        n /= 3;
    while (n % 5 == 0)
        n /= 5;
    return n == 1;
}

int main()
{
    int n = 10;
    vector<int> v;
    int i = 1;
    while (v.size() != n)
    {
        if (isUgly(i))
        {
            v.push_back(i);
        }
        i++;
    }

    return 0;
}
