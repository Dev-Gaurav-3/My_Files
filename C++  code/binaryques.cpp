#include<iostream>
#include<vector>
#include "binarysearch.cpp"
using namespace std;

// Find first and last occurence of an element in a given array //

// int firstoccur(int *arr,int n,int target){

//     int lo = 0;
//     int hi = n-1;
//     int lp = -1;
//     while (lo<=hi)
//     {
//         int mid = lo + ((hi-lo)/2);

//         if(arr[mid] == target){
//             lp = mid;
//             hi = mid-1;
//         }
//         else if (arr[mid] > target)
//         {
//             hi = mid-1;
//         }
//         else{
//             lo = mid+1;           
//         }
        
        
//     }
//     cout<<"["<<lp<<",";    

// }
// int lastoccur(int *arr,int n,int target){

//     int lo = 0;
//     int hi = n-1;

//     int rp = -1;

//     while (lo<=hi)
//     {
//         int mid = lo + ((hi-lo)/2);
//         if(arr[mid] == target){
//             rp = mid;
//             lo = mid+1;
//         }
//         else if (arr[mid] > target)
//         {
//             hi = mid-1;
//         }
//         else{
//             lo = mid+1;           
//         }

//     }
//     cout<<rp<<"]";
// }

// int main(){

//     int arr[] = {-2,-1,1,2,3,4,4,4,5};
//     int target = 4;
//     int n = sizeof(arr)/sizeof(arr[0]);

//     firstoccur(arr,n,target);
//     lastoccur(arr,n,target);


//     return 0;
// }

// find the index of target element in rotated sorted array //

int binarysearchrotated(vector<int>&input,int target){

    int lo = 0,hi = input.size()-1;

    while (lo<=hi)
    {
        int mid = lo + ((hi-lo)/2);
        if (input[mid] == target) return mid;
        if(input[mid]>= input[lo]){
            if(target > input[lo] and target <=input[mid]){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        else{
            if(target >= input[mid] and target <= input[hi]){
                lo = mid +1;
            }else{
                lo = mid+1;
            }
        }
    }

    return -1;
    
}

int main(){

    vector<int> input = {6,7,8,1,2,3,4,5};
    int target = 4;

    // cout<<binarysearch(input,target);

    return 0;
}