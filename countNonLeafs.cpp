int countNonLeafs(struct Node* root) 
{
	if(root==NULL || (root->left == NULL && root->right == NULL))
      return 0;
  return 
    1+countNonLeafs(root->left)+countNonLeafs(root->right);
}
//revised.
