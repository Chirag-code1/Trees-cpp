#include <iostream>
using namespace std;

struct TreeNode
{
    char val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

void right_view(TreeNode *node, int& max_level, int level)
{
    if (node == NULL)
       return;
    if (max_level < level)
    {
        cout << node->val << " ";
        max_level = level;
    }
    right_view(node->right, max_level, level + 1);
    right_view(node->left, max_level, level + 1);
}

int main()
{
    TreeNode* root = new TreeNode('A');
    root->left = new TreeNode('D');
    root->left->left = new TreeNode('H');
    root->left->right = new TreeNode('L');
    root->left->right->right = new TreeNode('P');
    root->right = new TreeNode('Z');
    root->right->left = new TreeNode('C');
    root->right->left->left = new TreeNode('B');
    root->right->left->left->right = new TreeNode('G');

    
   int max_level = -1;
    cout << "Right View of the tree (Recursive method): ";
    right_view(root, max_level, 0);
    cout << endl;

    return 0;
}