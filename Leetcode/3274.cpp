#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<vector<int>>v = {
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
    };

    string c1 = "h7";
    string c2 = "c8";

    int i = int(char(c1[0] - 'a')); // Row
    int j = 8 - int(char(c1[1] - '0')); // Column

    int k = int(char(c2[0] - 'a')); 
    int l = 8 - int(char(c2[1] - '0'));

    if(v[j][i] == v[l][k]){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
