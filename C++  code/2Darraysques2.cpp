#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void rotateArray(vector<vector<int>> &v,int n){

//     //First find Tanspose

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             swap(v[i][j],v[j][i]);
//         }
        
//     }

//     // Now Reverse every row
//     for (int i = 0; i <n; i++)
//     {
//         reverse(v[i].begin(),v[i].end());
        
//     }
    
    
// }

// int main(){

//     int n;
//     cin>>n;

//     vector<vector<int>> matrix(n,vector<int>(n));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>matrix[i][j];
//         }
//     }

//     rotateArray(matrix,n);
    

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<matrix[i][j]<<" ";

//         }
//         cout<<endl;
        
//     }

//     return 0;
// }

// return all the elements of matrix in spiral order

void return_spiral(vector<vector<int>> &v){
    int left = 0, right = v[0].size() - 1, top = 0, bottom = v.size() - 1;
    int direction = 0;

    while (left <= right && top <= bottom) {
        if (direction == 0) { // Traverse from left to right
            for (int col = left; col <= right; col++) {
                cout << v[top][col] << " ";
            }
            top++;
        }
        else if (direction == 1) { // Traverse from top to bottom
            for (int row = top; row <= bottom; row++) {
                cout << v[row][right] << " ";
            }
            right--;
        } 
        else if (direction == 2) { // Traverse from right to left
            for (int col = right; col >= left; col--) {
                cout << v[bottom][col] << " ";
            }
            bottom--;
        }
        else{ // Traverse from bottom to top
            for (int row = bottom; row >= top; row--) {
                cout << v[row][left] << " "; 
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

int main(){

    int m ,n;
    cin>>m>>n;

    vector<vector<int>> v(n,vector<int>(m));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i][j];
        }
        
    }
    
    return_spiral(v); 

    return 0;
}