#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    string s = "foobar";
    char letter = 'o';
    unordered_map<char,double>m;
    for(auto ele:s){
        m[ele]++;
    }
    int n = s.size();
    for(auto ele:m){
        if(ele.first == letter){
            double ans = (ele.second/n);
            ans *= 100;
            int res = int(ans);
        }
    }

    return 0;
}
