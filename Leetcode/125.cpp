#include<iostream>
using namespace std;

int main(){

    string s = "race a car";

    int i = 0;
    int j = s.size()-1;

    while (j>i)
    {
        if(s[i] == s[j] or tolower(s[i]) == tolower(s[j])){
            i++;
            j--;
        }
        else if(int(s[i])<= 96 or int(s[i])>=91){
            i++;
            continue;
        }
        else if(int(s[j])<= 96 or int(s[j])>=91){
            j--;
            continue;
        }
        else{
            return 0;
        }
    }
    
    
    

    return 0;
}
