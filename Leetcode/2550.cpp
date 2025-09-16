#include<iostream>
using namespace std;

int main(){

    int n = 1000000000;
    int ans = 1;
    while(n--){
        ans *= 2;
        ans %= 1000000007;
    }
    
    cout<<ans;
    

    return 0;
}
