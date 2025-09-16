#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int v)
    {
        value = v;
        left = right = NULL;
    }
};

int target(Node *root, int target_sum)
{
    // done in leetcode //
}

int main()
{
    // Q) root = {10,5,-3,3,2,null,11,3,-2,nul,1}; target sum;

    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(-3);
    root->left->left = new Node(3);
    root->left->left->left = new Node(3);
    root->left->left->right = new Node(-2);
    root->left->right = new Node(2);
    root->left->right->right = new Node(1);
    root->right->right = new Node(11);

    int target_sum = 8;

    return 0;
}
