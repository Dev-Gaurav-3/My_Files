#include<iostream>
using namespace std;

int main(){

    int n = 6;
    int ans = 0;
        while(n>0){
            if(n%2 == 0 && n%3 == 0){
                n = min((n%2) + n/2 , (n%3)+(2*(n/3)));
                ans++;
            }
            else if(n%3 == 0){
                n -= 2*n/3;
                ans++;
            }
            else if(n%2 == 0){
                n -= n/2;
                ans++;
            }
            else{
                n--;
                ans++;
            }
        }
    

    return 0;
}
