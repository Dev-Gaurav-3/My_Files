#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string s = "1001101";

    int l = 0;
    int r = s.size() - 1;
    int ans = 0;

    while (l < r)
    {
        if (s[l] == '0')
        {
            l++;
        }
        if (s[r] == '1')
        {
            r--;
        }
        if (s[l] == '1' && s[r] == '0')
        {
            swap(s[l], s[r]);
            ans += r - l;
            l++;
            r--;
        }
    }

    cout << s;

    return 0;
}
