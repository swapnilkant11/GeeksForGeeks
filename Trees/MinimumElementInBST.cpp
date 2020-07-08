// Given a Binary Search Tree. The task is to find the minimum element in this given BST. If the tree is empty, there is no 
// minimum elemnt, so print -1 in that case.

https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1

// created by Swapnil Kant
// on 08-07-2020

int returnminimumelementinBST(struct node *root){
   // if the node is NULL return -1.
   if(root == NULL)
      return -1;
   // since it's a BST so, traverse to the leftmost child node of the tree.
   while(root->left != NULL)
      root = root->left;
   return root->data;
}

// the time complexity of the above algorithm is O(n), worst case for left skewed trees.
// the space complexity of the above algorithm is O(1).
