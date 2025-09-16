#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    string s = "abcabcab";

        int even = INT8_MAX;
        int odd = INT16_MIN;
        unordered_map<char,int>m;
        for(char ele:s){
            m[ele]++;
        }
        for(auto ele:m){
            if(ele.second%2 == 0 && ele.second<even){
                even = ele.second;
            }
            else if(ele.second%2 != 0 && ele.second>odd){
                odd = ele.second;
            }
        }

        cout<<odd-even;
    

    return 0;
}
