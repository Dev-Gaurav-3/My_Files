#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 33454;
    string s = "";
    int i = 1;
    while (s.size() <= n)
    {
        s += to_string(i);
        i++;
    }
    cout << s[n - 1];

    return 0;
}
