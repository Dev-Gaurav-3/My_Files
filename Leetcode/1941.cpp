#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    string s = "ababcc";
    unordered_map<char,int>m1;
        for(auto ele:s){
            m1[ele]++;
        }
        int occ = m1.begin()->second;
        for(auto ele:m1){
            if(ele.second != occ){
                return false;
            }
            return true;
        }
        return true;
    

    return 0;
}
