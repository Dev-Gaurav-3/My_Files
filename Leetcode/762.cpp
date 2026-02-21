#include<bits/stdc++.h>
using namespace std;

set<int> primes = {2,3,5,7,11,13,17,19};


bool f(int n){
    int ans = 0;
    while(n>0){
        n = n&(n-1);
        ans++;
    }
    if (primes.count(ans)) {while(n>0){
        ans += n&(n-1);
    }
        return true;
    }
    return false;
}

int main(){
    int left = 1,right = 1e4-1;
    int ans = 0;
    for (int i = left; i <= right; i++)
    {
        ans += f(i);
    }
    cout<< ans <<endl;
    
  return 0;
}
