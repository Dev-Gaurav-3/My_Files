#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 1;

    int binary = 0;
    while(n>0){
        binary++;
        n /= 2;
    }
    int ans = 0;
    while (binary)
    {
        int bin = binary-1;
        int temp = 1;
        while(bin--){
            temp *= 2;
        }
        ans += temp;
        binary--;
    }

    cout<<ans;
    

  return 0;
}
