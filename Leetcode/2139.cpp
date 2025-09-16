#include<iostream>
using namespace std;

int main(){

    int target = 19;
    int maxDoubles = 2;

    int ans = 0;
        while(target != 1){
            if(target%2 == 0 && maxDoubles >0){
                target /= 2;
                maxDoubles--;
                ans++;
            }
            else{
                target--;
                ans++;
            }
            if(maxDoubles == 0) break;
        }
        ans += target-1;
    

    return 0;
}
