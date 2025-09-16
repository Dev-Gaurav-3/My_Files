#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int>&v){
    int lo = 0;
    int hi = v.size()-1;

    while (lo<=hi)
    {
        int mid = lo + (hi-lo)/2;

        if(v[mid]>v[mid+1] and v[mid]>v[mid-1]){
            return mid;
        }

        else if (v[mid]>v[mid-1] && v[mid]<v[mid+1])
        {
            lo = mid+1;
        }
        else{

            hi = mid-1;

        }
        
    
    }

    return lo;
    

}

int main(){

    vector<int> v = {1,2,2,4,5,5,4,4,4,5,1,1,};

    cout<<binary(v);

    return 0;
}
