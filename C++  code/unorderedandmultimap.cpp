#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    
    unordered_map<int,string> r1;
    // roll no. , name
    r1.insert(make_pair(1,"gaur"));
    r1.insert(make_pair(3,"Sani"));
    r1.insert(make_pair(2,"Lata"));
    r1[4] = "Dudu" ;

    for(auto pair : r1){
        cout<<pair.first<<":"<<pair.second<<"\n";
    }

    // in this if we assign same key a different value then value will get changed // 
    // functions are same as map//
    
    cout<<endl<<endl;

    map<int,string> r2;
    // roll no. , name
    r2.insert(make_pair(1,"gaur"));
    r2.insert(make_pair(3,"Sani"));
    r2.insert(make_pair(2,"Lata"));
    r2[4] = "Anur" ;

    for(auto pair : r2){
        cout<<pair.first<<":"<<pair.second<<"\n";
    }

    // MULTIMAP //
    // ordered ele , duplicate keys can be there //
    // UNORDERED MULTIMAP // 
    // unordered ele , dupli are allowed //

    //  we cannot use r3[4] = sfs to add ele in multimap always use insert //

    return 0;
}
