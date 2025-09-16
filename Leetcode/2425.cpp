#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v1 = {1,2};
    vector<int>v2 = {3,4};
    
    int n = v1.size();
    int m = v2.size();
    int res = 0;
    if(m%2 !=0){
        for(int num:v1){
            res ^= num;
        }
        
    }
    if(n%2 !=0){
        for(int num:v2){
            res ^= num;
        }
        
    }
    
    cout<<res;


    

    return 0;
}
