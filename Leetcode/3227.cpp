#include <iostream>
using namespace std;

int main()
{

    string s = "leetcoder";
    int vowels = 0;
    for (char ch : s)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return true;
        }
    }

    return false;

    return 0;
}
