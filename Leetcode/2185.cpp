#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    vector<string>v={"leetcode","win","loops","success"}    ;
    string pref = "code";
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i].rfind(pref,0)==0){
            count++;
        }        
        else{
            continue;
        }
    }
    cout<<count;
    

    return 0;
}
