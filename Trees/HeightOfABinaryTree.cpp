// Given a binary tree, find its height.

https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

// created by Swapnil Kant
// on 07-07-2020

int findheight(struct node *root){
  // if the root is null return.
  if(root == NULL)
    return 0;
  else{
    // return the left of the root to calculate the height of the left subtree.
    int heightleft = findheight(root->left);
    // return the right of the root to calculate the height of the right subtree.
    int heightright = findheight(root->right);
    // now return the greater height.
    if(heightleft > heightright)
      return heightleft + 1;
    return heightright + 1;
}

// the time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).

