#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<string>v = {"flower","flow","flight"};
    bool flag = false;
    for (int i = 0; i < v[0].size(); i++)
    {
        string prefix = "";
        char ch = v[0][i];
        if(flag == true){
            ch += v[0][i+1];
        }       
        for (int j = 1; j < v.size(); j++)
        {
                        
        }
        

        
    }
    


    return 0;
}
