#include<iostream>
using namespace std;

int main(){

    string s = "Hello";
    for (int i = 0; i < s.size(); i++)
    {
        if(int(s[i])<=int('Z') && int(s[i])>=int('A')){
            s[i] = tolower(s[i]);
        }
    }
    
    cout<<s;
    

    return 0;
}
