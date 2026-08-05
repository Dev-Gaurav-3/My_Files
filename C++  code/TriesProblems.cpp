#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    unordered_map<char,Node*>child;
    bool end;

    Node(){
        end = false;
    }
};

class Trie{
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insert(string s){
        Node* temp = root;
        for (int i = 0; i < s.size(); i++)
        {
            if(!temp->child.count(s[i])){
                temp->child[s[i]] = new Node();
            }
            temp = temp->child[s[i]];
        }
        temp->end = true;
    };
    bool search(string Prefix){
        Node* temp = root;
        for (int i = 0; i < Prefix.size(); i++)
        {
            if(temp->child.count(Prefix[i])){
                temp = temp->child[Prefix[i]];
            }
            else return false;
        }
        return true;
    }

};

int main(){

    // Q) Take an input from the user Prefix and tell, is any word in the array starts from that Prefix // 
    vector<string>v = {"apple","app","mango","man","woman"};
    Trie t;
    // for(auto &x : v){
    //     t.insert(x);
    // }
    // string Prefix;cout <<"Enter Perfix: ";cin>>Prefix;
    // cout << t.search(Prefix) << endl;


    




    
    return 0;
}