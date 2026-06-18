#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    unordered_map<char,Node*>children;
    bool endOfWord;

    Node(){
        endOfWord = false;
    }
};

class Trie{
    Node* root;
public:
    Trie(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if(!temp->children.count(key[i])){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }
    bool search(string key){
        Node* temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if(temp->children.count(key[i])){
                temp = temp->children[key[i]];
            }
            else break;
        }
        if(temp->endOfWord) return true;
        return false;
    }
};

int main(){

    vector<string>words = {"the" , "a" , "there" , "their" , "any" , "thee"};
    Trie trie;

    for(auto &x:words){
        trie.insert(x);
    }

    cout << trie.search("an") << endl;


    return 0;
}