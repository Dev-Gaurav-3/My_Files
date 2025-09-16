#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string num = "6777133339";

    string s = "";

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == num[i + 1] && num[i] == num[i + 2])
        {
            if (s.empty())
            {
                s.append(3, num[i]);
                i += 2;
            }
            else
            {
                if (int(s[0]) < int(num[i]))
                {
                    s.clear();
                    s.append(3, num[i]);
                }
            }
        }
    }
    cout << s;

    return 0;
}
