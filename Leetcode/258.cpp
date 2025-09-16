#include<iostream>
using namespace std;

int main(){

    int num = 38;
    string s = to_string(num);
        if(num == 0) return 0;
        while(s.size() > 1){
            int ans = 0;
            for(int i = 0;i<s.size();i++){
                ans += int(s[i]) - 48;
            }
            s = to_string(ans);
        }
        int ans = int(s[0]) - 48;
    

    return 0;
}
