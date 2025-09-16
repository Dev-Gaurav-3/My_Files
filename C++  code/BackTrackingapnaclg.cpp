#include<iostream>
using namespace std;

// BACKTRACKING => Backtracking is an algorithmic-technique for solving recursive problems by trying to build
// every possible solution incrementally and removing those solutions that fail to satisfy the constraints
// of the problem at any point of time

// Q) Rat in a maze

bool isSafe(int x , int y , int n,int **arr){
    if(x<n && y<n && arr[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}

bool ratinMaze(int **arr, int x , int y,int n,int** solarr){

    if(x==n-1,y ==n-1){
        solarr[x][y] =1;
        return true;
    }

    if(isSafe(x,y,n,arr)){
        solarr[x][y] = 1;
        if (ratinMaze(arr,x+1,y,n,solarr)){
            return true;
        }
        if (ratinMaze(arr,x,y+1,n,solarr))
        {
            return true;
        }
        solarr[x][y] =0; // backktracking
        return false;
    }
    return false;
}


int main(){

    int n;
    cout<<"Enter Size of arr:";
    cin>>n;

    int **arr = new int*[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    int **solarr = new int*[n];

    for (int i = 0; i <n; i++)
    {
        solarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solarr[i][j] = 0;
        }
        
    }

    cout<<endl;
    
    if(ratinMaze(arr,0,0,n,solarr)){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <n; j++)
            {
                cout<<solarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }   

    return 0;
}
