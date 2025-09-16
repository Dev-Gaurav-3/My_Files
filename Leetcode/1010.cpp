#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>time = {60,60,60,60,60};

        vector<int>v(60,0);
        for(int i:time){
            v[i%60]++;
        }
        int ans = 0;
        for(int i = 1;i<30;i++){
            ans += v[i]*v[60-i];
        }
        for(int i = 0;i<v.size();i++){
            if(v[i]>1 && (i+i) %60 == 0){
                if(v[i] == 2) ans++;
                else{
                    ans += (v[i]*(v[i]-1))/2;
                }
            }
        }
    cout<<ans;

    return 0;
}
