#include <iostream>
#include <vector>
using namespace std;

// GIVEN AN INTEGER N RETURN THE FIRST N ROWS OF PASCAL'S TRIANGLE
int factorial(int n)
{

    int ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    return ans;
}

int C(int i, int j)
{
    int res;

    res = factorial(i) / (factorial(j) * (factorial(i - j)));
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << C(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}

// Better Approach

// vector<vector<int>> Pascal_Triangle(int n){

//     vector<vector<int>> pascal(n);

//     for (int i = 0; i < n; i++)
//     {
//         pascal[i].resize(i+1);

//         for (int j = 0; j < i+1; j++)
//         {
//             if (j==0 || j==i)
//             {
//                 pascal[i][j] =1;
//             }
//             else{
//                 pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
//             }
//         }

//     }
//     return pascal;
//     }

// int main(){

//     int n;
//     cin>>n;

//     vector<vector<int>> ans;
//     ans = Pascal_Triangle(n);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0 ;
// }

// GIVEN A MATRIX WHERE EACH ROW IS SORTED ,FIND THE ROW WITH MAX NO. OF ONES

// int main(){

//     int n,m;
//     cin>>n>>m;

//     int v[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>v[i][j];
//         }

//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (v[j][i] == 1)
//             {
//                 cout<<j;
//                 return 0; // but problem in this is that it will terminate the whole program and line of code ahead of it will not get execute
//             }
//         }
//     }
//     return 0 ;
// }