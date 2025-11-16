#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int ans = 0;
    while(n>3){
        int num = n*(n-1);
        n--;
        int den = n-1+(n-2);
        n -= 2;

        ans += (num/den);
        n--;
    }
    if(n<3) return ans + n;
    if(n == 3) return ans + 6;

  return 0;
}
