#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){

    // map<string,int> m1;
    // m1["Me"] = 7404;
    // m1["Maa"] = 9255;
    // m1["Paa"] = 9354;

    // for(auto ele:m1){
    //     string key = ele.first;
    //     int value = ele.second;

    //     cout<<key<<":"<<value<<"\n";
    // }

    // m1.erase(key),m1.erase(itr),m1.erase(strt itr,end itr)
    // m1.swap(m2),swap(m1,m2);
    // m1.clear()

    // m1.empty() => check empty or not 
    // m1.size();
    // m1.find(key) return ele if present otherwise returns the m1.end()
    // m1.count() => no. of occurrences of key 

    // m1.upper_bound(key) => returns an itr to next greater ele 
    // m1.lower_bound(key) 

    // rbegin() =itr to first ele in reverse direction 

    // map<string,int>::iterator itr;
    // for(itr = m1.begin();itr != m1.end();itr++){
    //     cout<<itr->first<<":"<<itr->second<<"\n";
    // }
    // map<string,int>::reverse_iterator ritr;

    // for(ritr = m1.rbegin();ritr != m1.rend();ritr++){
    //     cout<<ritr->first<<":"<<ritr->second<<"\n";
    // }

    // if we try to insert value with same key then second will get ignored //
     
    //Q) given an array of numbers return the sum of that ele that is occuring more than two times //

    vector<int> v = {1,1,1,2,3,3};

    map<int,int>m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    
    int sum = 0;

    for(auto ele:m){
            if(ele.second>1){
                sum += ele.first;
            }
    }
    cout<<sum;    

    return 0;
}
