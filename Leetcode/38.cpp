#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "1";
    int n = 4;
    
    n--;

    while(n--){
        string ans = "";
        for (int i = 0; i < s.size(); ){
            char ch = s[i];
            int count = 0;
            int j = i;
            while (j < s.size() && s[j] == ch){
                count++;
                j++;
            }
            ans += to_string(count);
            ans.push_back(ch);
            i = j;
        }
        s = ans;
    }

    cout << s;

    return 0;
}
