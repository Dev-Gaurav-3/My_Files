#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int max_area = 0;

    int l_ptr = 0;
    int r_ptr = height.size()-1;
    
    while(l_ptr<r_ptr){
        int mini = min(height[l_ptr],height[r_ptr]);
        int area = mini*(r_ptr - l_ptr);
        max_area = max(max_area, area);

        if (height[l_ptr] < height[r_ptr]) {
            l_ptr++;
        } else {
            r_ptr--;
        }
    }
    
    cout<<max_area;
    

    return 0;
}
