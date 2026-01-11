#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* ans = NULL;
int maxDepth = 0;

int dfs(TreeNode* root,int depth){
    maxDepth = max(maxDepth,depth);
    if(!root) return depth;

    int l = dfs(root->left,depth+1);
    int r = dfs(root->right,depth+1);

    if(l == maxDepth || r == maxDepth) ans = root;

    return max(l,r);
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(5);

    dfs(root);

    

  return 0;
}
