#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "AbBCab";
    map<char, int> m;
    
    for (int i = 0; i < s.size(); i++) {
        m[s[i]] = i;
    }

    int ans = 0;
    for (auto ele : m) {
        char ch = ele.first;
        int idx = ele.second;

        if (ch >= 'a' && ch <= 'z') {
            char upper = ch - 32;
            auto it = m.find(upper);
            if (it != m.end() && it->second > idx) {
                ans++;
            }
        }
    }

    cout << "Answer: " << ans << endl;

    return 0;
}
