#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

    vector<int>hand = {1,2,2,3,3,4,6,7,8};
    int groupSize = 3;
    if(hand.size()%groupSize != 0) return false;
    map<int,int>m;
    for(auto ele:hand){
        m[ele]++;
    }
    for(int i = 0;i<hand.size();i += groupSize){
        
    }
    

    

    return 0;
}
