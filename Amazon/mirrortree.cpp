// Given a Binary Tree, convert it into its mirror.

https://practice.geeksforgeeks.org/problems/mirror-tree/1

struct node{
  int data;
  struct node *left, *right;
}

struct node *newnode(int data){
  struct node *node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void convertmirror(struct node* root){
  // if NULL return.
  if(root == NULL) 
    return;
  // traverse left subtree.
  convertmirror(root->left);
  // traverse right subtree.
  convertmirror(root->right);
  // swapping of nodes takes place here.
  struct node *temp = root->left;
  root->left = node->right;
  node->right = temp;
}

// the time complexity of the above algorithm is O(n) as we are traversing each 'n' nodes.
// the space complexity of the above algorithm is O(1).
