#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main(){

    string s = "cat and mice";
    int i = 0;
    int vow = 0;
    while(i<s.size() && s[i] != ' '){
        if(isVowel(s[i])) vow++;
        i++;
    }
    for (int j = i+1; j < s.size(); j++)
    {
        int k = j;
        int currVow = 0;
        while(k<s.size() && s[k] != ' '){
            if(isVowel(s[k])) currVow++;
            k++;
        }
        if(currVow == vow){
            reverse(s.begin()+j , s.begin()+k);
        }
        j = k;
    }

    cout<< s <<endl;
    

  return 0;
}
