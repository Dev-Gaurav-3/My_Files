#include<iostream>
#include<vector>
using namespace std;


void countsort(vector<int> &v){
    int n = v.size();
    //find the max ele;

    int max_ele = INT8_MIN;
    for (int i = 0; i <n; i++)
    {
        max_ele = max(v[i],max_ele);
    }
    
    //calculate freq arr;
    vector<int>freq(max_ele+1,0);
    for (int i = 0; i <n; i++)
    {
        freq[v[i]]++;
    }
    // calculate cumulative freq;
    for (int i = 1; i <= max_ele; i++)
    {
        freq[i] += freq[i-1];
    }
    vector<int>ans(n);
    for (int i = n-1; i>=0 ; i--)
    {
        ans[--freq[v[i]]] = v[i];
    }

    for (int i = 0; i < n; i++)
    {
        v[i] = ans[i];
    }

}

int main(){
    // COUNT SORT => not used there where is disparity in elements

    int n;
    cin>>n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    countsort(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}