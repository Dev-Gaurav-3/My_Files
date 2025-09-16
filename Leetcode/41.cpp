#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

    vector<int>nums;
    map<int,int>m;

    for(auto ele :nums){
        m[ele]++;
    }

    int counter = 1;

    for(auto ele:m){
        if(ele.first <= 0){
            continue;
        }
        else if(ele.first == counter){
            counter++;
        }
        else{
            return counter;
        }
    }
    return counter+1;
}
