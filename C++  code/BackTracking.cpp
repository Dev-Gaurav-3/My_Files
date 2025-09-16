#include<iostream>
#include<vector>
using namespace std;

// void f(string &s,int i ){
//     if(i == s.size()){
//         cout<<s<<" ";
//         return;
//     }

//     for (int j = i; j < s.size(); j++)
//     {
//         swap(s[i],s[j]);
//         f(s,i+1);
//         swap(s[i],s[j]);
//     }
    
// }

// int main(){

//     // Q) Print all permutation => input = "PQR" // 

//     string s = "PQRS";

//     f(s,0);

//     return 0;
// }

// SUDOKU SOLVER //

// bool canwe(vector<vector<char>>&board,int row,int col,char num){
//     for (int j = 0; j <9; j++)
//     {
//         if(board[row][j] == num)return false;
//     }
//     for (int i = 0; i < 9; i++)
//     {
//         if(board[i][col] == num) return false;
//     }
//     int r = (row/3)*3;
//     int c = (col/3)*3;
//     for (int i = r; i < r+3; i++)
//     {
//         for (int j = c; j < c+3; j++)
//         {
//             if(board[i][j] == num) return false;
//         }
        
//     }
    
    
    
// }

// bool sudoku(vector<vector<char>>&board,int row ,int col){
//     if(col == 9) return sudoku(board,row+1,0);
//     if(row == 9) return true;
//     if(board[row][col] == '.'){
//         for (int num = 1; num <= 9; num++)
//         {
//             if(canwe(board,row,col,'0'+num)){
//                 board[row][col] = '0' + num;
//                 bool res = sudoku(board,row,col+1);
//                 if(res) return true;
//                 board[row][col] = '.';
//             }
//         }
//         return false;
//     }
//     else{
//         return sudoku(board,row,col+1);
//     }
// }

// int main(){
//     vector<vector<char>>board = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
//     cout<<sudoku(board,0,0);
// }

// RAT IN A MAZE : HOW MANY WAYS //

// bool canwego(int a,int b,vector<vector<int>>&grid){
//     return (a<grid.size() and b<grid.size() and a>= 0 and b>= 0) and grid[a][b] == 1;
// }

// int f(int i ,int j,vector<vector<int>>&grid){

//     int n = grid.size();
//     if(i == n-1 and j == n-1) return 1;

//     int ans = 0;
//     grid[i][j] = 2;

//     if(canwego(i,j+1,grid))
//         ans += f(i,j+1,grid);
//     if(canwego(i+1,j,grid))
//         ans += f(i+1,j,grid);
//     if(canwego(i,j-1,grid))
//         ans += f(i,j-1,grid);
//     if(canwego(i-1,j,grid))
//         ans += f(i-1,j,grid);

//     grid[i][j] = 1;
//     return ans;

// }

// int main(){

//     vector<vector<int>>grid = {{1,1,1,1},{0,1,0,1},{0,1,1,1},{0,1,1,1}};
//     cout<<f(0,0,grid);

// }

// N-QUEENS //

bool canweplace(int row,int col,vector<vector<char>>&grid){
    // is someone attacking from vertical up //
    for (int i = row-1; i>=0; i--)
    {
        if(grid[i][col] == 'Q'){
            return false;
        }
    }

    for (int i = row-1,j = col-1; i>=0 and j>=0; i--,j--)
    {
        if(grid[i][j] == 'Q'){
            return false;
        }
    }
    
    for (int i = row-1,j = col+1; i>=0 and j<grid.size(); i--,j++)
    {
        if(grid[i][j] == 'Q'){
            return false;
        }
    }
    return true;     
}

void nqueen(int n,vector<vector<char>>&grid,int currrow){
    if(n<=3){
        return ;
    }
    if(currrow == n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"**\n";
    }

    for (int col = 0; col < n; col++)
    {
        if(canweplace(currrow,col,grid)){
            grid[currrow][col] = 'Q';
            nqueen(n,grid,currrow+1);
            grid[currrow][col] = '.';
        }
    }
    
}


int main(){

    int n;
    cin>>n;

    vector<vector<char>>grid(n,vector<char>(n,'.'));

    nqueen(n,grid,0);


    return 0;
}