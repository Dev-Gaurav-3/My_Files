#include<iostream>
using namespace std;

int main(){

    string s = "3902";
    while(s.size()!= 2){
        string ans = "";
        for(int i = 0;i<s.size()-1;i++){
            int sum = 0;
            sum =  (int(s[i]) + int(s[i+1])-96)%10;
            ans += to_string(sum);
        }
        cout<<ans;
        s = ans;
    }
    if(s[0] == s[1]) return true;

    return false;
        
    

    return 0;
}
