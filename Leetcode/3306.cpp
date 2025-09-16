#include <iostream>
using namespace std;

int main()
{

    string s = "iqeaouqi";
    int n = 2;
    int ans = 0;
    for (int k = 0; k < s.size() - 5; k++)
    {
        bool a = false;
        bool e = false;
        bool i = false;
        bool o = false;
        bool u = false;
        int conso = 0;
        for (int j = k; j < s.size(); j++)
        {
            if (s[j] == 'a')
                a = true;
            else if (s[j] == 'e')
                e = true;
            else if (s[j] == 'i')
                i = true;
            else if (s[j] == 'o')
                o = true;
            else if (s[j] == 'u')
                u = true;
            else
            {
                conso++;
            }
            if (conso > n)
                break;
            if (a && e && i && o && u && conso == n)
            {
                ans++;
                break;
            }
        }
    }

    return 0;
}
