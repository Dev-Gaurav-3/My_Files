#include<bits/stdc++.h>
using namespace std;

vector<int>bit(int n){
    vector<int>v(32,0);
    vector<int>temp;
    while(n>0){
        temp.push_back(n%2);
        n /= 2;
    }
    int x = temp.size();
    for(int i = 0;i<temp.size();i++){
        v[32 - x + i] = temp[x - 1 - i];
    }
    return v;
}

int main(){
    int a = 2,b = 6,c = 5;
    vector<int>v1 = bit(a);
    vector<int>v2 = bit(b);
    vector<int>v3 = bit(c);

    int ans = 0;
    for(int i = 25;i<32;i++){
        if((v1[i] || v2[i]) == v3[i]) continue;
        else if(v3[i] == 0){
            if(v1[i] != 0) ans++;
            if(v2[i] != 0) ans++;
        }
        else{
            ans++;
        }
    }

    cout<<ans;




  return 0;
}
