
int areSameTree(struct Node* t1, struct Node* t2)
{
	if(t1 == NULL && t2 == NULL)
      return 1;
  	if(t1 == NULL || t2 == NULL)
      return 0;
  	if(t1->data != t2->data)
      return 0;
  	if(!areSameTree(t1->left, t2->left))
      return 0;
  	if(!areSameTree(t1->right, t2->right))
      return 0;
  	return 1;
} //revised.
