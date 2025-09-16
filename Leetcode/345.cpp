#include<iostream>
using namespace std;

int main(){

    string s = "IcecreAm";

    int l = 0;
        int r = s.size()-1;
        while(l<r){
            if(s[l] == 'a' or s[l] == 'A' or s[l] == 'E' or s[l] == 'e' or s[l] == 'O' or s[l] == 'o' or s[l] == 'I' or s[l] == 'i' or s[l] == 'U' or s[l] == 'u'){
                if(s[r] == 'a' or s[r] == 'A' or s[r] == 'E' or s[r] == 'e' or s[r] == 'O' or s[r] == 'o' or s[r] == 'I' or s[r] == 'i' or s[r] == 'U' or s[r] == 'u'){
                    swap(s[l],s[r]);
                    l++;
                }
                r--;
                continue;
            }
        l++;
        }
    
        cout<<s;

    return 0;
}
