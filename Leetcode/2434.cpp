#include<iostream>
using namespace std;

int main(){

    string s = "zza";
    int n = 0;
        for(int i = 0;i<s.size();i++){
            if(int(s[i]) < int(s[n])){
                n = i;
            }
        }
        string ans = "";
        for(int i = n;i>=0;i--){
            ans.push_back(s[i]);
        }
        for(int i = n+1;i<s.size();i++){
            ans.push_back(s[i]);
        }

    return 0;
}
