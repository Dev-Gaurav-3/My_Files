#include<iostream>
using namespace std;

int main(){

    string s1 = "attack";
    string s2 = "defend";

    if(s1 == s2){
        return true;
    }
    if(s1.length() != s2.length()){
        return false;
    }

    int first_ptr;
    int secnd_ptr;

    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == s2[i]){
            continue;
        }
        else{
            first_ptr = i;
            char ch = s1[i];
            secnd_ptr = s2.find(ch);
            break;
        }
    }

    swap(s1[first_ptr],s1[secnd_ptr]);
    if(s1 == s2){
        cout<<true;
        return true;
    }
    else{
        cout<<false;
    }
    

    

    return 0;
}
