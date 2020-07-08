// Given a Binary Tree of size N and an integer K. Print all nodes that are at distance k from root (root is considered at distance 0 from 
// itself). Nodes should be printed from left to right. If k is more that height of tree, nothing should be printed.

https://practice.geeksforgeeks.org/problems/k-distance-from-root/1

// created by Swapnil Kant
// on 08-07-2020

void returnnodedata(struct node *root, int k){
  // if the current node is NULL return.
  if(root == NULL)
    return;
  // if k == 0 means we can now print the data value.
  if(k == 0)
    cout<<root->data<<endl;
  // else we have to go through the other nodes of the tree.
  else{
    // traverse the left subtree of the given tree.
    returnnodedata(root->left, k - 1);
    // traverse the right subtree of the given tree.
    returnnodedata(root>right, k - 1);
  }
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1). 
