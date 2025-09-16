#include<iostream>
#include<list>
using namespace std;

int main(){

    // List //
    list<int>l1 = {1,2,5,4};
    auto itr = l1.begin();
    cout<<*itr<<endl;
    auto rev_itr = l1.rbegin();
    cout<<*rev_itr<<endl;

    advance(itr,2);
    cout<<*itr<<endl;
    
    for (auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;

    //l1.insert(positin,element)//
    auto itr1 = l1.begin();
    advance(itr1,1);
    l1.insert(itr1,6);
    for (auto num:l1){
        cout<<num<<" ";
    }

    return 0;
}
