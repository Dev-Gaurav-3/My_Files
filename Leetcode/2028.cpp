#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v={1,5,6};

    int n = 4,mean = 3;
    int sum =0;

    for ( int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    int deno = n+v.size();
    int x = deno*mean - sum;

    if(sum>n*6) return {};
    vector<int>ans(n,1);
    int prefix_sum = n;
    int i = 0;
    while(prefix_sum < x){
        if(i>=n) i = 0;
        ans[i]++;
        i++;
        prefix_sum++;
    }
    return 0;
}

