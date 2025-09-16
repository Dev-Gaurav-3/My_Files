#include <iostream>
using namespace std;

int main()
{

    string word = "aya";
    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;
    for (char ch : word)
    {
        if (ch >= '0' && ch <= '9')
        {
            flag1 = true;
        }
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            flag2 = true;
        }
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            flag3 = true;
        }
        else
        {
            return false;
        }
    }

    cout << flag1 && flag2 && flag3;

    return 0;
}
