// Given a Binary Tree of size N. The task is to complete the function sumLeaf(), that should return the sum of all the leaf nodes of the 
// given binary tree.

https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes/1

// created by Swapnil Kant
// on 08-07-2020

int findsumofleafnodes(struct node *root){
  // if root is NULL return 0.
  if(root == NULL)
    return 0;
  // if current node is a leaf node.
  if(root->left == NULL && root->right == NULL)
    return root->data;
  // return the calculated sum.
  return findsumofleafnodes(root->left) + findsumofleafnodes(root->right);
}

// the time complexity of the above aglorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
