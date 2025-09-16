#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{

    string s = "]]][[[";

    int op = 0;
    int cl = 0;
    int ans = 0;
    int last_pos = s.size() - 1;

    for (char ch : s)
    {
        if (ch == '[')
        {
            op++;
        }
        else
        {
            cl++;
        }
        if (cl > op)
        {
            for (int i = last_pos; i >= 0; i--)
            {
                if (s[i] == '[')
                {
                    swap(ch, s[i]);
                    ans++;
                    op++;
                    cl--;
                    break;
                }
                last_pos = i;
            }
        }
    }

    return 0;
}
