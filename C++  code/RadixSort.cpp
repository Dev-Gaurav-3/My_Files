#include<iostream>
#include<vector>
using namespace std;

// RADIX SORT => Use where disparity in elements

void countSort (vector <int> &v ,int pos){

    int n = v.size();

    vector<int> freq(10,0);
    for (int i = 0; i <n; i++)
    {
        freq[(v[i]/pos)%10]++;
    }
    
    for (int i = 1; i < 10; i++)
    {
        freq[i] += freq[i-1];
    }

    vector<int>ans(n);
    for (int i = n-1; i >= 0; i--)
    {
        ans[--freq[(v[i]/pos)%10]] = v[i];
    }
    
    for(int i = 0;i<n;i++){
        v[i] = ans[i];
    }
    

}

void radixsort(vector<int>&v){

    int maxele = INT8_MIN;
    for(auto x :v){
        maxele = max(x,maxele);
    }

    for (int pos = 1;maxele/pos>0 ; pos *= 10)
    {
        countSort(v,pos);
    }
    

}


int main(){ 
    int n;
    cin>>n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    radixsort(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}
 