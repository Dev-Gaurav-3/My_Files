#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    vector<int> nums = {5, 8, 3};

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0)
        {
            for (int j = nums[i] - nums[i - 1] - 1; j > 1; j++)
            {
                if (isPrime(j))
                    nums[i] -= j;
                break;
            }
        }
        else
        {
            for (int j = nums[i]; j > 1; j--)
            {
                if (isPrime(j))
                {
                    nums[i] -= j;
                    break;
                }
            }
        }
    }

    for (int i : nums)
    {
        cout << i << " ";
    }

    return 0;
}
