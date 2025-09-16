#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string a = "11";
    string b = "1";
    int n = stoi(a);
    int m = stoi(b);

        int num = m+n;

        string str;
        while (num > 0) {
        str.push_back(num%2);
        num /= 2;
    }
    reverse(str.begin(),str.end());
    

    return 0;
}
