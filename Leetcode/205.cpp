#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    string s1 = "egg";
    string s2 = "adc";
    unordered_map<char,char>m;
    int size = s1.size();
    int i = 0;
    while(size){
        m[s1[i]] = s2[i];
        i++;
        size--;
    }
    
    

    return 0;
}
