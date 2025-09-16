#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    string s = "lEetcOde";

    vector<char> v;

    for (char ch : s)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            v.push_back(ch);
        }
    }

    sort(v.begin(), v.end());
    int i = 0;
    string t = "";
    for (char ch : s)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            t += v[i];
            i++;
        }
        else
        {
            t += ch;
        }
    }

    cout << t;

    return 0;
}
