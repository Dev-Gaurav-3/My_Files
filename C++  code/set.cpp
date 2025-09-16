#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int>set1= {4,2,1,3};
    set<int ,greater<int>> set2 = {1,5,6,2,4};

    // set1.intser(value);

    // size remains same in set if we add duplicate values;

    // set.begin() = iterator pointing to the first ele //
    // set.end() = iterator pointing to the position after the last ele // 

    set<int>::iterator iter = set1.begin();

    // while(iter != set1.end()){
    //     cout<<*iter<<" ";
    //     iter++;
    // }
    // cout<<endl;

    // for(auto val : set2){
    //     cout<<val<<" ";
    // }

    // DELETING // 

    // set1.erase(value);
    // set1.erase(position);
    // set1.erase(strt pos,end pos);

    if(set1.find(4) != set1.end()){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }

    // lower_bound = returns ele if present otherwise returns greater ele //
    // uppper_bound = returns the next greater value //

    // rbegin() = returns iter to first ele of set in reverse order //
    // rend() = returns iter to position after last ele in reverse order //

    // Unnordered_set = ele are stored randomly //

    // multiset = store duplicates value in ordered way //


    return 0;
}
