#include<iostream>
#include<vector>
using namespace std;

int main(){

    int num = 28;
    int ans = 0;
    for (int i = 1; i < num/2+1; i++)
    {
        if(num%i == 0){
            ans += i; 
        }
    }
    if(ans == num) return true;

    return 0;
}
