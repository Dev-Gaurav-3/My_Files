#include<bits/stdc++.h>
using namespace std;

int main(){
    int bottom = 6,top = 8;
    vector<int>special = {7,6,8};
    sort(special.begin(),special.end());
    int maxi = special[0] - bottom;
    for (int i = 1; i < special.size(); i++)
    {
        maxi = max(maxi,special[i] - special[i-1]);
    }
    maxi = max(maxi,top-special[special.size()-1]);

    cout<<maxi;
    

  return 0;
}
