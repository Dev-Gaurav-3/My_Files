#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,1,0};

    int x = 0;

    bool flag;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if(i == j) continue;

            else{
                x ^= v[j];
            }
        }
        if(x == v[i]) return true;
        else{
            return false;
        }
    }
    

     
    

    return 0;
}
