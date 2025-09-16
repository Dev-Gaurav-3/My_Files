#include<iostream>
using namespace std;

int main(){

    string a = "abcd";
    string b = "cdabcdab";

    size_t f = a.find(b);
        if(f != string::npos) return 1;
        int count = 1;
        string s = a;
        while(b.size()>=a.size()){
            size_t f = a.find(b);
            if(f != string::npos){
                return count;
            }
            else{
                a += s;
                count++;
            }
        }
        if(f != string::npos){
            return count;
        }
        return -1;
    

    return 0;
}

