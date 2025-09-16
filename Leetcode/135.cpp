#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>ratings = {29,51,87,87,72,12};
    int n = ratings.size();
    vector<int>v(n,1);
        for(int i = 0;i<n;i++){
            if(i == 0){
                if(ratings[0]>ratings[1]) v[i]++;
            }
            else if(i == n-1){
                if(ratings[n-1]>ratings[n-2]){
                    int n = v[n-1]+1;
                    v[i] += n;
                }
            }
            else if(ratings[i]>ratings[i+1] or ratings[i]>ratings[i-1]){
                int mini = min(v[i-1],v[i+1]);
                v[i] += mini+1;
            }

        }
        int ans = 0;
        for(auto ele:v){
            ans += ele;
        }
    cout<<ans;
    

    return 0;
}
