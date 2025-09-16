#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>&input,int target){
    int lo = 0;
    int hi = input.size()-1;

    while (lo<=hi)
    {
        // calc mid pt for the search space
        int mid = lo + ((hi-lo)/2);
        if(input[mid] == target) return mid;
 
        else if (input[mid]<target)
        {
            lo = mid+1;
        }
        else{
            hi = mid -1;    
        }
        
    }

    return -1;
    

}

int main(){

    vector<int> input = {0,1,2,4,5,6,7,8};
    int target = 4;

    cout<<binarysearch(input,target);
    

    return 0;
}

// RECURSIVE BIANRY SEARCH IMPLEMENTATION

// int f(vector<int> &input , int target ,int lo,int hi){
//     int mid = lo + ((hi-lo)/2); // modified mid to tackle overflow
//     if(input[mid] == target){
//         return mid;
//     }

//     if(input[mid] >target){
//         return f(input,target,lo,mid-1);
//     }
//     else{
//         return f(input,target,mid+1,hi);
//     }
//     return -1;
// }

// int main(){

//     vector <int> input = {2,4,5,7,15,24,45};
//     int target = 15;
//     int lo = 0;
//     int hi = input.size();

//     cout<<f(input,target,lo,hi); 

//     return 0;
// }

//FIND THE FIRST OCUURENCE OF A GIVEN ELEMENT 

// int main(){

//     vector<int> v = {2,5,5,5,6,6,9,9,9};
//     int target = 9;
//     int hi = v.size()-1;
//     int lo = 0;
//     int ans = -1;

//     while (lo<=hi)
//     {
//         int mid = lo + ((hi-lo)/2);
//         if (v[mid] == target)
//         {
//             ans = mid;
//             hi = mid-1;
//         }
        
//         else if (v[mid] > target)
//         {
//             hi = mid -1;
//         }

//         else
//         {
//             lo = mid +1;
//         }
        
                
//     }

//     cout<<ans ;
    

//     return 0;
// }

// find squareroot of a number and return only int value

// int main(){

//     int n = 1;

//     for (int i = 1; i <= n;i++)
//     {
//         if (i*i == n)
//         {
//             cout<<i;
//             break;
//         }
        
//         else if(n>=i*i and n<(i+1)*(i+1)){
//             cout<<i<<endl;
//             break;
//         }
        
//     }
// }

// binary search method

// int sqrt(int n){
//     int lo = 1;
//     int hi = n;
//     int ans = -1;

//     while(lo<=hi){
//         int mid = lo +((hi-lo)/2);

//         if(mid*mid<=n){
//             ans = mid;
//             lo = mid +1;
//         } 
//         else{
//             hi = mid -1;
//         }
//     }

//     return ans;
// }

// int main(){
//     int n = 100;

//     cout<<sqrt(n);

//     return 0;
// }