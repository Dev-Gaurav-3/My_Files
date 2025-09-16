#include<iostream>
using namespace std;

// int main(){

    // datatype array_name [row][column]

    // int m,n;
    // cin>>m>>n;
    // int Two_D_array[m][n];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin>>Two_D_array[i][j];
    //     }
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<Two_D_array[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    // MULTIPLICATION OF TWO MATRICES 

//     int r1,c1,r2,c2;
//     cin>>r1>>c1>>r2>>c2;
//     if (c1 != r2)
//     {
//         cout<<"matrix multiplication is not possible";
//     }

    
//         int mat1[r1][c1],mat2[r2][c2];
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             cin>>mat1[i][j];
//         }
//     }

//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             cin>>mat2[i][j];
//         }
//     }

//     int res_mat[r1][c2];

//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             int value =0;
//             for (int k = 0; k < r2; k++)
//             {
//                 value += mat1[i][k] * mat2[k][j];
                
//             }
//             res_mat[i][j] = value;
            
//         }
        
//     }
    


//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             cout<<res_mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//   return 0 ;
// }

// TRANSPOSE OF A MATRIX

int main(){
    int row,col;
    cin>>row>>col;

    int A[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>A[i][j];
        }
        
    }

    int transpose[col][row];

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            transpose[i][j] = A [j][i];
        }
        
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
        
    }                 
                     
    return 0 ;
}