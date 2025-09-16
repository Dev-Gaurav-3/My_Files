#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s1 = "fs";
    string s2 = "fashsfjc";
    vector<int>v;
    bool flag = false;
    int str = 0;

    for (int i = 0; i < s2.size(); i++)
    {
        if(s2[i] == s1[0]){
            str++;
            v.push_back(i);
        }
    }

    for (int i = 0; i < str; i++)
    {
        int str1 = v[i];
        int k = 0;
        int jptr = str1 + s1.size();

        for (int j = str1; j < jptr; j++)
        {
            

            if(s1[k] == s2[v[i] - k]){
                flag = true;
                k += 1;
            }
            
            else{
                flag = false;
                break;
            }
        }
        
    }

    if(flag){
        cout<<flag;
        return 0;
    }

    else{
        
        for (int i = 0; i < str; i++)
        {
            int str1 = v[i];
            int k = 0;
            int jptr = str1 + s1.size();

            for (int j = jptr; j > str1; j--)
            {
                

                if(s1[k] == s2[v[i] + k]){
                    flag = true;
                    k -= 1;
                }
                
                else{
                    flag = false;
                    break;
                }
            }
        
        }
    }
    
    cout<<flag;


    

    return 0;
}
