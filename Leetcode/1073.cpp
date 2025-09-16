#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    vector<int>v1 = {1,1,1,1,1};
    vector<int>v2 = {1,0,1};

    int n = 0;
    int sum1 = 0;
    for (int i = v1.size()-1; i>=0 ; i--)
    {
        sum1 += pow(-2,n)*v1[i];
        n++;
    }
    int m = 0;
    int sum2 = 0;

    for (int i = v2.size()-1; i>=0; i--)
    {
        sum2 += pow(-2,m)*v2[i];
        m++; 
    }

    int ans = sum1+sum2;

    vector<int>res;
    while (ans>0)
    {
        res.push_back(ans%2);
        ans /= 2;
    }
    
    reverse(res.begin(),res.end());
    

    return 0;
}
