#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "abc";    
    string p = ".*c";

    bool flag = false;

    if(s.length() != p.length()){
        return flag; 
    }

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == p[i]){
            flag = true;
        }
        else if(p[i] == '*'){
            flag = true;
        }
        else if(p[i] == '.'){
            flag = true;
        }
        else{
            flag = false;
        }
    }

    cout<<flag;

    

    return 0;
}
