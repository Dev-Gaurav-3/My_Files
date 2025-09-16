#include<iostream>
using namespace std;

int main(){

    string s1 = "sabutsa";
    string s2 = "sad";

    size_t idx = s1.find(s2);

    if(idx>=0){
        return idx;
    }
    else{
        return -1;
    }


    return 0;
}
