#include<iostream>
#include<queue>
#include<map>
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

void Pre_Order_Traversal(Node* rootnode){

    if(rootnode == NULL)return ;

    cout<<rootnode->value<<" ";
    // recursive call // 
    Pre_Order_Traversal(rootnode->left);
    Pre_Order_Traversal(rootnode->right);


}

void In_Order_Traversal(Node* rootnode){
    if(rootnode == NULL) return;

    In_Order_Traversal(rootnode->left);
    cout<<rootnode->value<<" ";
    In_Order_Traversal(rootnode->right);
}

void Post_Order_Traversal(Node* rootnode){
    if(rootnode == NULL) return;
    
    Post_Order_Traversal(rootnode->left);
    Post_Order_Traversal(rootnode->right);
    cout<<rootnode->value<<" ";
}

void Level_Order_Traversal(Node* rootnode){

    if(rootnode == NULL) return ;
    
    queue<Node*> q;

    q.push(rootnode);

    while (!q.empty())
    {
        int nodesAtCurrLvl = q.size();
        while(nodesAtCurrLvl--){
            Node* currNode = q.front();
            q.pop();

            if(currNode->left != NULL){
                q.push(currNode->left);
            }
            if(currNode->right != NULL){
                q.push(currNode->right);
            }
            cout<<currNode->value<<" ";
        }
        cout<<endl;
    }
    
}

int max_depth(Node* rootnode){

    if(rootnode == NULL) return 0;

    int leftdepth = max_depth(rootnode->left);
    int rightdepth = max_depth(rootnode->right);

    return max(leftdepth,rightdepth)+1;
}

int Leaf_Nodes(Node* root){

    if(root == NULL) return 0;

    if(root->left == NULL and root->right == NULL) return 1;

    int left = Leaf_Nodes(root->left);
    int right = Leaf_Nodes(root->right);

    return left+right;
}

vector<int>can_see(Node* root){

    vector<int>ans;
    if(root == NULL) return ans;
    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        int nodesatcurr = q.size();
        while(nodesatcurr){

            Node* currnode = q.front();
            q.pop();

            if(nodesatcurr == 1){
                ans.push_back(currnode->value);
            }

            if(currnode->left){
                q.push(currnode->left);
            }
            if(currnode->right){
                q.push(currnode->right);
            }

            nodesatcurr--;
        }
    }
    return ans;
}

vector<int>Top_View(Node* root){
    vector<int>ans;
    if(root == NULL) return {};

    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    map<int,int>m;
    while(!q.empty()){
        int nodeatcuur = q.size();
        while(nodeatcuur--){
            pair<Node*,int> p = q.front();
            Node* currnode = p.first;
            int currcolumn = p.second;
            q.pop();

            if(m.find(currcolumn) == m.end()){
                m[currcolumn] = currnode->value;
            }
            if(currnode->left){
                q.push(make_pair(currnode->left,currcolumn-1));
            }
            if(currnode->right){
                q.push(make_pair(currnode->right,currcolumn+1));
            }
        }
    }
    for (auto i:m)
    {
        ans.push_back(i.second);
    }
    return ans;
}

int main(){

    // TYPES OF TREES //
    // 1) Generic tree => root node can have can have any no. of nodes //
    // 2) Binary tree => root node can have max 2 child node //
    // 3) Binary search tree => in left side node value is less than the root node and in right side have 
    // more value than the root node //
    // 4) AVL tree => self balancing trees => difference btw left subtree and right subtree can be -1,0,1
    // height -> max no. of edges btw leaf node and root node //    

    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->left->right = new Node(12);
    root->left->right = new Node(5);
    root->right->right = new Node(11);

    // cout<<root->value<<" "<<root->left->value<<" "<< root->right->value;

    // DEPTH-FIRST-SEARCH (DFS) =>traverse along the height // 
    // TYPE OF DFS //
    // 1) PRE-ORDER => first root node ,left subtree ,right subtree
    // 2) IN-ORDER => first left subtree,than root ,right subtree 
    // 3) POST-ORDER => left , right , than root;

    // Pre_Order_Traversal(root);
    // In_Order_Traversal(root);
    // Post_Order_Traversal(root);
    //    2
    //  4   10
    // 6 5   11

    // BREADTH-FIRST-SEARCH (BFS) => traverse along the breadth //

    // LEVEL-ORDER => like 2 4 10 6 5 11

    // Level_Order_Traversal(root);

    // Q) find maximum depth of a binary tree, root node is given // 

    // cout<<max_depth(root);

    // Q) GIVEN A ROOT OF BINARY TREE RETURN THE NUMBER OF LEAF NODES // 

    // cout<<Leaf_Nodes(root);

    // Q)Given the root of a binary tree, imagine yourself standing on the right side of it, return the
    //values of the nodes you can see from top to bottom.

    // vector<int>ans = can_see(root);
    // for (auto ele:ans)
    // {
    //     cout<<ele<<" ";
    // }

    // Q) TOP VIEW OF A BINARY TREE // 

    vector<int>ans = Top_View(root);

    for(auto ele:ans){
        cout<<ele<<" ";
    }


    return 0;
}
