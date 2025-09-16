#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>spiral(int n,vector<vector<int>>&ans){
    int top = 0;int left = 0;int right = n;int bottom = n;
    int direction = 0;
    int counter = 1;
    while (top<=bottom and left<=right)
    {
        if(direction == 0){
            for (int i = left; i < right; i++)
            {
                ans[left][i] = counter;
                counter++;
            }
            top++;
            direction++;
        }
        else if(direction == 1){
            for (int i = top; i < bottom; i++)
            {
                ans[i][right] = counter;
                counter++;
            }
            right--;
            direction++;
        }
        else if(direction ==2){
            for (int i = right; i < left; i++)
            {
                ans[bottom][i] = counter;
                counter++;                
            }
            bottom--;
            direction++;
        }
        else{
            for (int i = bottom; i < top; i++)
            {
                ans[i][top] = counter;
                counter++;
            }
            left++;
            direction++;           
        }
        direction %= 4;
    }
    

}

int main(){

    int n = 3;
    vector<vector<int>>matrix;
    spiral(n,matrix);

    return 0;
}
