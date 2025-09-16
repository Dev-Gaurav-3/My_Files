#include<iostream>
#include<vector>
using namespace std;

// repeatedly find min element and place it in the beginning

void SelectionSort(vector<int>&v){
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int min_idx =i;
        for (int j = i+1; j < n; j++)
        {
            if(v[j]<v[min_idx]){
                min_idx = j;
            }

        }

        if(i != min_idx){
            swap(v[i],v[min_idx]);
        }
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

    SelectionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
        

    return 0;
}