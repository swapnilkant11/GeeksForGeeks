// Given a binary tree, find its height.

https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

struct node{
  int data;
  struct node *right, *left;
}

struct node *newnode(int data){
  struct node *node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

int findheightoftree(struct node* root){
  // if root is NULL.
  if(root == NULL)
    return 0;
  else{
    // traverse for left subtree.
    int ldepth = findheightoftree(root->left);
    // traverse for right subtree.
    int rdepth = findheightoftree(root->right);
    // if the left subtree depth is more.
    if(ldepth >= rdepth)
      return ldepth + 1;
    // if the right subtree depth is more.
    else
      return rdepth + 1;
  }
}

// the time complexity of the above algorithm is O(n) where 'n' is the total number of nodes.
// the space complexity of the above algorithm is O(1).
