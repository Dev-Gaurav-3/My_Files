#include<iostream>
#include<vector>
using namespace std;

int binarymountain(int *arr,int n){ // also valid if there are many peaks....
    int lo = 0;
    int hi = n-1;

    while (lo<=hi)
    {
        int mid = lo + ((hi-lo)/2);

        if(arr[mid]>arr[mid-1] and arr[mid] > arr[mid+1]) return mid;

        else if (arr[mid]>arr[mid-1] and arr[mid]<arr[mid+1])
        {
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
        
    }
    
}

int main(){
// given a mountain array such that arr[0] <arr[1] < .... <arr[i-1] <arr[i] > arr[i+1] > .... arr[arr.length -1], return the index of peak element i.e (i)
    
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<binarymountain(arr,n);


    return 0;
}

// search the targeted element in a 2d array if found return 1 otherwise 0;
//integers in each row is sorted nad the first integer of every row is greater than last integer of previous row;

// bool binarysearch(vector<vector<int>>&v,int n ,int m ,int target){
//     for (int i = 0; i < n; i++)
//     {
//         if(target>=v[i][0] and target<=v[i][m-1]){

//             int lo = 0, hi = m-1;
//             while (lo<=hi)
//             {
//                 int mid = lo + ((hi-lo)/2);

//                 if (v[i][mid] == target)
//                 {
//                     return true;
//                 }

//                 else if (v[i][mid]>target)
//                 {
//                     hi = mid-1;
//                 }
//                 else{
//                     lo = mid+1;
//                 }
                
                
//             }break;            

//         }
//     }

//     return false;
    
// }

// int main(){

//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>>v(n,vector<int>(m));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>v[i][j];
//         }
        
//     }
    

//     int target;
//     cin>>target;

//     cout<<binarysearch(v,n,m,target);



//     return 0;
// }