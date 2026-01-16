#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1 = "fs";
    string s2 = "fashsfjc";
    int k = s1.size();
    sort(s1.begin(),s1.end());

    for(int i = 0;i<s2.size();i++){
        string s = s2.substr(i,i+k);
        sort(s.begin(),s.end());

        if(s == s1){
            cout<<1;
            return 0;
        }
    }
}   
