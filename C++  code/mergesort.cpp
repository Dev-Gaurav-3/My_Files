#include<iostream>
#include<vector>
using namespace std;

// DIVIDE AND CONQUER

void merge(int v[],int l,int mid,int r){
    //create 2 temp arrays
    int an = mid-l+1;
    int bn = r-mid;

    int a[an];
    int b[bn];

    for (int i = 0; i < an; i++)
    {
        a[i] =v[l+i];
    }
    for (int j = 0; j <bn; j++)
    {
        b[j] = v[mid+1+j];
    }
    int i=0,j=0,k=l;

    while (i<an && j<bn)
    {
        if(a[i]<b[j]){
            v[k++] = a[i++];
        }
        else{
            v[k++] = b[j++];
        }
    }
    while(i<an){
        v[k++] = a[i++];
    }
    while(j<bn){
        v[k++] = b[j++];
    }
    
    

}

void merge_sort(int v1[],int l,int r){

    if(l>= r){
        return ;
    }
    int mid = (l+r)/2;
    merge_sort(v1,l,mid);
    merge_sort(v1,mid+1,r);
    merge(v1,l,mid,r);

}

int main(){
    int v[] = {10,28,24,6,34,18,38,44};
    int n = sizeof(v)/sizeof(v[0]);
    merge_sort(v,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;    
}

// DRAWBACKS

// Slower for smaller tasks
//Use O(n) extra space 
// goes through whole proces even if array is sorted