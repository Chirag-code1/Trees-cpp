int countLeafs(struct Node* root) 
{
    if(root == NULL)
    return 0;
    else if(root->left == NULL && root->right == NULL)
    return 1;
    else 
    return
    countLeafs(root->left) + countLeafs(root->right);
} //revised.
