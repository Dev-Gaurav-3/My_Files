#include<iostream>
using namespace std;

bool Can_Construct(string &s,int k){
    if(s.length()<k) return false;
    if(s.length() == k) return true;
    int odd = 0;
    char c[26] = {0};
    for (char ch : s)
    {
        c[ch-'a']++;        
    }
    for (int i = 0; i < 26; i++)
    {
        if(c[i] %2 == 1) odd++; 
    }
    
    return odd<=k; 
}

int main(){

    string s = "eminem";
    int k = 2;
    cout<<Can_Construct(s,k);

    return 0;
}
