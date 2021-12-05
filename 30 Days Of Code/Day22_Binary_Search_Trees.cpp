int getHeight(Node* root)
{
  //Write your code here
  if(root == nullptr)
  return -1;
  int rC = getHeight(root->right);int lC = getHeight(root->left);
  return max(rC, lC)+1;
}
