#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>>triangle = {{7},{6,3},{3,8,5},{11,2,10,9}};
    int i = 0;
    int j = 0;
    int min_sum = triangle[i][j];
    for (i = 1; i < triangle.size(); i++)
    {
        int mini = min(triangle[i][j],triangle[i][j+1]);
        if(mini == triangle[i][j+1]) j++;
        min_sum += mini;
    }

    cout<<min_sum;
    
    
}
