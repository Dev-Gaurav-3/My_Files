#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(5,1);

    string s = "";
    for(int i = 0;i<v.size();i++){
        s.push_back(int(v[i])+48);
    }

    cout<<s;

    return 0;
}
