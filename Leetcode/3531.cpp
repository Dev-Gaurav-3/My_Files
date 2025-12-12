#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>b = {{1,2},{2,2},{3,2},{2,1},{2,3}};

    unordered_map<int,int>max_x;
    unordered_map<int,int>min_x;
    unordered_map<int,int>max_y;
    unordered_map<int,int>min_y;

    for (int i = 0; i < (int)b.size(); ++i) {
        int x = b[i][0];
        int y = b[i][1];

        if (!min_x.count(x)) min_x[x] = y; else min_x[x] = min(min_x[x], y);
        if (!max_x.count(x)) max_x[x] = y; else max_x[x] = max(max_x[x], y);

        if (!min_y.count(y)) min_y[y] = x; else min_y[y] = min(min_y[y], x);
        if (!max_y.count(y)) max_y[y] = x; else max_y[y] = max(max_y[y], x);
    }

    int ans = 0;
    for (int i = 0; i < (int)b.size(); ++i) {
    int x = b[i][0], y = b[i][1];
    if (min_x[x] < y && y < max_x[x] &&
        min_y[y] < x && x < max_y[y]) {
        ++ans;
        }
    }
  return 0;
}
