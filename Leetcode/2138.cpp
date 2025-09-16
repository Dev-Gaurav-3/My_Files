#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s = "abcdefghij";
    int k = 3;
    char fill = 'x';
    vector<string>res;
    int size = s.size();

    if(size%k != 0){
        int n = k-size%k;
        while(n--){
            s.push_back(fill);
        }
    }

    for(int i = 0;i<s.size()-k+1;i+=k){
        string ans = "";
        for(int j = i;j<i+k;j++){
            ans.push_back(s[j]);
        }
        res.push_back(ans);
    }

    for(auto ele:res){
        cout<<ele<<" ";
    }

    

    return 0;
}
