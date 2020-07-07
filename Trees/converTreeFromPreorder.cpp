// Given an array pre[] that represents Preorder traversal of a binary tree. One more array preLN[] is given which has only two possible values ‘L’ and ‘N’. The value ‘L’ in preLN[] indicates that the corresponding node in Binary Tree is a leaf node and value ‘N’ indicates 
// that the corresponding node is the non-leaf node.
// Note: it is a special binary tree where every node has either 0 or 2 children​

https://practice.geeksforgeeks.org/problems/construct-tree-from-preorder-traversal/1

// created by Swapnil Kant
// on 07-07-2020

struct node{
  int data;
  struct node *left, *right;
};

struct node *newnode(int data){
  // get a node from memory.
  struct node *node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

struct node convertTreePreorder(int n, int &index, int pre[], char preLN[]){
  // get the index of the pre array.
  int index_ptr = index;
  // if the index_ptr reaches the end of the array return NULL.
  if(index_ptr == n)
    return NULL;
  // get the root of the tree.
  struct node *root = newnode(pre[index_ptr]);
  // increment the pointer of the array to point to the next element.
  index++;
  // if the current node is not a leaf node and is a normal node then.
  if(preLN[index_ptr] == 'N'){
    root->left = convertTreePreorder(n, index, pre, preLN);
    root->right = convertTreePreorder(n, index, pre, preLN);
  }
  // now finally return the node if the node is a leaf node.
  return root;
}

struct node convertTreePreorderUtil(int n, int pre[], char preLN[]){
  // declare the index.
  int index = 0;
  return convertTreePreorder(n, index, pre, preLN);
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm will be O(1).
