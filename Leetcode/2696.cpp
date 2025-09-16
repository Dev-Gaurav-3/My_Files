#include<iostream>
using namespace std;

int main(){

    string s = "ABFCACDB";

    for (int i = 0; i <s.length();i++)
    {
        if(s[i] == 'A'){
            if(s[i+1] == 'B'){
                s.erase(s.find("AB"),2);
            }
        }
        if(s[i] == 'C'){
            if(s[i+1] == 'D'){
                s.erase(s.find("CD"),2);
                i -= 1;
            }
        }
    }

    for (int i = 0; i <s.length();i++)
    {
        if(s[i] == 'A'){
            if(s[i+1] == 'B'){
                s.erase(s.find("AB"),2);
            }
        }
        if(s[i] == 'C'){
            if(s[i+1] == 'D'){
                s.erase(s.find("CD"),2);
                i -= 1;
            }
        }
    }
    for (int i = 0; i <s.length();i++)
    {
        if(s[i] == 'A'){
            if(s[i+1] == 'B'){
                s.erase(s.find("AB"),2);
            }
        }
        if(s[i] == 'C'){
            if(s[i+1] == 'D'){
                s.erase(s.find("CD"),2);
                i -= 1;
            }
        }
    }

    cout<<s;
    
    

    return 0;
}
