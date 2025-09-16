#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int value;
    Node* left;
    Node* right;
    Node(int v){
        value = v;
        left = right = NULL;
    }
};

void path(Node* root,int target,int ans){
    if(root == NULL and ans == target) return ; 
}

int main(){

    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(11);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(2);
    root->right->left = new Node(13);
    root->right->right = new Node(4);
    root->right->right->left = new Node(5);
    root->right->right->right = new Node(1);   

    return 0;
}

