#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>skills = {3,2,5,1,3,4};

    sort(skills.begin(),skills.end());
    int sum = skills[0] + skills[skills.size()-1];
    int l = 1,h = skills.size()-2,chem = skills[0]*skills[skills.size()-1];
    while(l<h){
        if(skills[l] + skills[h] != sum) return -1;
        chem += (skills[l]*skills[h]);
    }

    return chem;

    

  return 0;
}
