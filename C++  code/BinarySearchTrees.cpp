#include<iostream>
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

class BST{
public:
    Node* root;

    BST(){
        root = NULL;
    }

};

void insertbst(Node* &root, int val){
    
    Node* new_node = new Node(val);
    if(root == NULL){
        root = new_node;
        return ;
    }

    Node* curr = root;

    while(true){
        if(curr->value >val){
            if(curr->left == NULL){
                curr->left = new_node;
                return;
            }
            curr = curr->left;;
        }
        else{
            if(curr->right == NULL){
                curr->right = new_node;
                return;
            }
            curr = curr->right;
        }
    }
}

bool bstSearch(Node* root,int target){
    if(root == NULL) return false;
    if(root->value == target) return true;
    else if(root->value > target){
        return bstSearch(root->left,target);
    }
    else{
        return bstSearch(root->right,target);
    }

    return false;

}

void In_Order_Traversal(Node* rootnode){
    if(rootnode == NULL) return;

    In_Order_Traversal(rootnode->left);
    cout<<rootnode->value<<" ";
    In_Order_Traversal(rootnode->right);
}

Node* LargerNodeBst(Node* root){
    Node* curr = root;
    while(curr && curr->right!= NULL){
        curr = curr->right;
    }
    return curr;

}

Node* DeleteBst(Node* root,int key){

    if(root == NULL) return root;

    if(root->value<key){
        root->right = DeleteBst(root->right,key);
    }
    else if(root->value > key){
        root->left = DeleteBst(root->left,key);
    }
    else{
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }
        else if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else{
            Node* justsmallerNode = LargerNodeBst(root->left); 
            root->left = DeleteBst(root->left,justsmallerNode->value);
        }
        return root;
    }
}

int main(){

    BST bst1;
    insertbst(bst1.root,3);
    insertbst(bst1.root,1);
    insertbst(bst1.root,4);
    insertbst(bst1.root,6);
    insertbst(bst1.root,2);
    In_Order_Traversal(bst1.root);
    // cout<<bstSearch(bst1.root,6);
    DeleteBst(bst1.root,2);
    cout<<endl;
    In_Order_Traversal(bst1.root);

    return 0;

}
