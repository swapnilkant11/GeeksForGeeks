// Given a Two Binary Trees, write a function that returns true if one is mirror of other, else returns false.

https://practice.geeksforgeeks.org/problems/two-mirror-trees/1

// created by Swapnil Kant
// on 09-08-2020

bool findMirrorTrees(struct node *root1, struct node *root2){
  // if both nodes are NULL it means the two trees are iddentical.
  if(root1 == NULL && root2 == NULL)
    return true;
  // if any one of the node is NULL and the other is not, it means the trees are not identical.
  if(root1 == NULL || root2 == NULL)
    return false;
  // else keep trversing the roots of the trees.
  return root1->data == root2->data && findMirrorTree(root1->left, root2->right) && findMirrorTree(root1->right, root2->left);
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
