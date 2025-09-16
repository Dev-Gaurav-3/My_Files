#include<iostream>
#include<cmath>
using namespace std;

bool primenum(int num){

    for (int i = 2; i*i< num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
        
    }
    return true;
}


int main(){

    int x,y;
    cin>>x>>y;

    for (int i = x; i <= y; i++)
    {
        if (primenum(i))
        {
            cout<<i<<" ";
        }
        
    }
    
    return 0;
}