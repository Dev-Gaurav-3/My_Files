#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

class hashing{
    
    vector<list<int>> hashtable;
    int buckets;
public:
    hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets; // division method //
    }

    void add(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchkey(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }

    void delet(int key){
        int idx = hashvalue(key);
        if(searchkey(key) != hashtable[idx].end()){
        hashtable[idx].erase(searchkey(key));
        cout<<key<<" key is deleted \n";
        }
        else{
            cout<<key<<" key is not present \n";
        }
    }

};

int main(){

    // HASHING => Finding a unique index of all elements to store them // 

    // 1st method to find hash value is ele % size of table //

    // Collisions => when elements have same hash value // 

    // To resolve collisons => Open hashing => seperate chaining => store linked list at that hash value // 

    // Closed hashing // 
    
    // 1) Linear probing => (h(k) + i ) % sizeof(table)  where h(k) = hash value 0<=i<=M,M= size of table; 

    // 1) Quadratic probing => (h(k) + i^2 ) % sizeof(table)  where h(k) = hash value 0<=i<=M;

    // LOAD FACTOR (L) -> Avg. entries in one bucket //

    // let n = no. of elements , m = no. of buckets , Then L = n/m //

    // REHASHING => increasing size of hash table and resistributing elements to it,Eg. = when L > 0.75 //

    hashing h(10);

    h.add(10);
    h.add(20);
    h.add(30);

    h.delet(30);
    h.delet(30);
    return 0;
}
