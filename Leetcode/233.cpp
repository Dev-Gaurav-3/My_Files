#include<iostream>
using namespace std;

int f(long long i,int ans1){
    
    while(i>0){
        if(i%10 == 1){
            ans1++;
        }
        i /= 10;
    }
    return ans1;

}

int main(){

    long long n;
    cin>>n;

    int ans2 = 0;
    for (long long i = 1; i <= n; i++)
    {
        int ans1 = 0;
        ans2 += f(i,ans1);
    }
    
    cout<<ans2;
    

    return 0;
}
