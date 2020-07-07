// Given a Binary Tree, convert it into its mirror.

https://practice.geeksforgeeks.org/problems/mirror-tree/1

// created by Swapnil Kant
// 07-07-2020

void MirrorTree(struct node *root){
  // if the node is NULL return.
  if(root == NULL)
    return;
  // else swapp the nodes to create a mirror tree.
  else{
    MirrorTree(root->left);
    MirrorTree(root->right);
    // swapp the two nodes.
    struct node *temp = root->left;
    root->left = root->right;
    root->right = temp;
  }
}

// the time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm wil be O(1).
