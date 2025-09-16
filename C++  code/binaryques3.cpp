#include<iostream>
#include<vector>
using namespace std;

bool candistchoco(vector<int>&arr,int mid,int s){
    int sreq = 1;
    int currsum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>mid){
            return false;
        }

        if(currsum + arr[i] >mid){
            sreq++;
            currsum = arr[i];

            if(sreq>s) return false;
        }
        else{
            currsum += arr[i];
        }
    }
    return true;
    
}

int distchoco(vector<int>&arr,int students){
    int n = arr.size();
    int lo = arr[0];
    int hi = 0;

    for (int i = 0; i < n; i++)
    {
        hi += arr[i];
    }

    int ans = -1;

    while(lo<=hi){
        int mid = lo + ((hi-lo)/2);
        if(candistchoco(arr,mid,students)){
            ans = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return ans;
}

int main(){

    
    vector<int>v;
    v = {12,34,67,90};

    cout<<distchoco(v,2);
    


    return 0;
}