#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

long long total = 0;
long long ans = 0;
long long MOD = 1e9+7;

int dfs(TreeNode* root){
    if(!root) return 0;

    long long l = dfs(root->left);
    long long r = dfs(root->right);

    long long sub = root->val + l + r;
    
    ans = max(ans,sub*(total-sub));

    return sub;

}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    total = dfs(root);
    dfs(root);
    cout<<ans;

  return 0;
}
