#include<iostream>
#include<vector>
using namespace std;
bool isdivisible(string &s,int m){
        long long n = 0;
        for(char ele:s){
            n *= 10;
            n += int(ele) - 48;
        }
        if(n%m == 0){
            return true;
        }
        return false;
    }
int main(){
    
    string word = "529282143571";
    int m = 4;

    vector<int>ans;
        string s = "";
        for(int i = 0;i<word.size();i++){
            s.push_back(word[i]);
            if(isdivisible(s,m)){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }

        }

    return 0;
}
