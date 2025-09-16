#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<char,int>m;
    string s = "aabb";
        for(char ele:s){
            m[ele]++;
        }
        
        for (int i = 0; i < s.size(); i++)
        {
            if(m[s[i]]==1){
                cout<<i;
                return 0;
            }
        }
        cout<< -1;      
    

    return 0;
}
