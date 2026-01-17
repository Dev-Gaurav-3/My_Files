#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>rolls = {1,1,3,2,4,2,2,3,3};
    int k = 4;

    unordered_set<int>st;
    int ans = 1;

    for (int &i : rolls)
    {
        st.insert(i);
        if(st.size() == k){
            ans++;
            st.clear();
        }
    }
    cout<<ans;
    
    
    

  return 0;
}
