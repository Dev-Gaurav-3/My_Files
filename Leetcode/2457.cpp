#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 467;
    int target = 6;
    long long original = n;

    long long sum = 0, tmp = n;
    while (tmp > 0)
    {
        sum += tmp % 10;
        tmp /= 10;
    }
    if (sum <= target)
        return 0;

    long long base = 1;
    while (true)
    {
        long long add = base - (n % base);
        n += add;

        long long s = 0, t = n;
        while (t > 0)
        {
            s += t % 10;
            t /= 10;
        }

        if (s <= target)
        {
            return n - original;
        }
        base *= 10;
    }
    return 0;
}
