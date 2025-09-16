#include<iostream>
#include<vector>
using namespace std;

// return the prefix sum in the same array without creating a new array

void prefixsum(vector <int> &v){

    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i-1];
    }
    return ;
}

int main(){

    int n;
    cin>>n;

    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }


    prefixsum(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}

// Q) CHECK IF WE CAN PARTITION THE ARRAY INTO TWO SUBARRAYS WITH EQUAL SUM

// bool partition(vector <int> &v){

//     int total_sum = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         total_sum += v[i];
//     }

//     int prefix_sum = 0;

//     for (int i = 0; i < v.size(); i++)
//     {
//         prefix_sum += v[i];
//         int suffix_sum = total_sum - prefix_sum;

//         if (prefix_sum == suffix_sum)
//         {
//             return true;
//         }
//     }
    

//     return false;    

// }



// int main(){
//     vector <int> v;

//     int n;
//     cin>>n;

//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     cout<<partition(v);

//     return 0;
    
// }


// Q)  GIVEN AN ARRAY OF SIZE N,ANSWER Q QUERIES WHERE YOU NEED TO PRINT THE SUM OF VALUES IN A GIVEN RANGE OF INDICES FROM L TO R

// FOLLOW 1 BASED INDEXING

// void Ans_Queries(vector<int> &v,int l,int r){

//     int sum = 0;

//     for (int i = l; i <=r ; i++)
//     {
//         sum += v[i]; 
//     }

//     cout<<sum<<endl;
    


// }

// int main(){

//     vector <int> v;

//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         int ele;
//         cin>>ele;

//         v.push_back(ele);
//     }
//     int q;
//     cout<<"Enter queries: ";
//     cin>>q;


//     while (q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         Ans_Queries(v,l,r);
//     }
    
//     return 0;
// }


// BETTER METHOD

// int main(){

//     int n;
//     cin>>n;

//     vector<int> v(n+1,0);   // 1 based indexing

//     for (int i = 1; i <=n; i++)
//     {
//         cin>>v[i];

//     }

//     // calculate prefix sum array

//     for (int i = 1; i <=n; i++)
//     {
//         v[i] += v[i-1];
//     }
    
//     int q;
//     cout<<"Enter Queries: ";
//     cin>>q;

//     while (q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         int ans = 0;

//         ans = v[r] - v[l-1];
//         cout<<ans<<endl;
//     }

    // return 0;
// }