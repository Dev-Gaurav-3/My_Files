#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "   -042";
    bool  flag = false;
        string ans;
        int idx = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == ' ') continue;
        else{
            idx = i;
            break;
        }
    }
    if(s[idx] == '-'){
        idx++;
        flag = true;
    }
    for (int i = idx; i < s.size(); i++)
    {
        if(int(s[i])<=9+'0' and int(s[i]) >= '0' or s[0] == '-' or s[0] == '+'){
            if(s[i] == '-' or s[i] == '+'){
                continue;
            }
            ans.push_back(s[i]);
        }
        else{
            break;
        }
    }
    int res = 0;
    for(char ch:ans){
        res *= 10;
        res += int(ch)-48;
    }

    cout<<res;

    return 0;
}
