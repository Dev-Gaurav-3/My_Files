#include<iostream>
using namespace std;

string binary(int n) {
    string ans = "";
    while(n > 0) {
        ans = char('0' + n % 2) + ans;
        n /= 2;
    }
    return ans;
}


int main(){

    string s = "0110";
    int n = 4;
    int ans = 0;
    for(int i = 1;i<=n;i++){
        string s1 = binary(i);
        size_t it = s.find(s1);
        if(it != string::npos) continue;
        else{
            return false;
        }
    }
    return 0;
}
