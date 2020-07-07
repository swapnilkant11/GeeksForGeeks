// Given a Binary Tree of size N , You have to count leaves in it. For example, there are two leaves in following tree.

https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1

// created by Swapnil Kant
// on 07-07-2020

int countLeaves(struct node *root){
  // if root is NULL return.
  if(root == NULL)
    return 0;
  // if the root does not have any left or the right child then return the count of root.
  if(root->left == NULL && root->right == NULL)
    return 1;
  // else return the sum of left and the right child node.
  else{
    countLeaves(root->left) + countLeaves(root->right);
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algoruthm will be O(1).
