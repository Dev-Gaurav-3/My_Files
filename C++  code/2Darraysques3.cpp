#include<iostream>
#include<vector>

using namespace std;

// int rectangle_sum(vector<vector<int>>&v,int l1,int r1,int l2,int r2 ){

//     int sum= 0;

//     for (int i = l1; i <=l2; i++)
//     {
//         for (int j = r1; j <=r2; j++)
//         {
//             sum += v[i][j];
//         }
        
//     }

//     cout<<sum;

//     return 0;
// }
// int rectangle_sum2(vector<vector<int>>&v,int l1,int r1,int l2,int r2 ){

//     int sum= 0;

//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 1; j < v[0].size(); j++)
//         {
//             v[i][j] += v[i][j-1];
//         }
        
//     }

//     for (int i = l1; i <= l2; i++)
//     {   if(r1 != 0){
//             sum += v[i][r2]-v[i][r1-1];
//         }
//         else{
//             sum += v[i][r2];
//         }
//     }

//     cout<<sum;

//     return 0;
        
// }
    

// int main(){
//     // given a matrix and two coordinates (l1,r1) and (l2,r2) , return the sum of the rectangle from (l1,r1) and (l2,r2) 

//     int m,n;
//     cin>>m>>n;

//     vector<vector<int>> v(m,vector<int>(n));

//     for (int i = 0; i <m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>v[i][j];
//         }
        
//     }
//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;

//     rectangle_sum(v,l1,r1,l2,r2); 

//     return 0;
// }

// ANOTHER APPROACH => pre calculating the horizontal sum of each row

// int main(){
//     int m,n;
//     cin>>m>>n;

//     vector<vector<int>> v(m,vector<int>(n));

//     for (int i = 0; i <m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>v[i][j];
//         }
        
//     }
//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;
//     rectangle_sum2(v,l1,r1,l2,r2);
     

//     return 0;

// }

