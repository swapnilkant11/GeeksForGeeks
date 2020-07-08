// Given a Binary Tree having random pointers clone the Binary Tree. The task is to complete the function cloneTree which take one argument 
// the root of the tree to be copied and should return the root of the cloned tree.

https://practice.geeksforgeeks.org/problems/clone-a-binary-tree/1

// created by Swapnil Kant
// on 08-07-2020

struct node{
  int data;
  struct node *left, *right, *random;
};

struct node *newnode(int data){
  // declare the memory of the node from the memory stack.
  struct node *node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  node->random = node->left = node->right = NULL;
  return node;
}

// function to clone the left and the right subtree of the given tree.
struct node *cloneLeftAndRight(struct node *tree, map<node*, node*> &mymap){
   // if the tree is NULL return.
   if(tree == NULL)
     return NULL;
   // allocate a new node.
   strut node *treeNode = newnode(tree->data);
   // map the current tree to the newly created node.
   mymap[tree] = treeNode;
   treeNode->left = cloneLeftAndRight(tree->left, mymap);
   treeNode->right = cloneLeftAndRight(tree->right, mymap);
   return treeNode;
}

// function to copy the random pointer node to the new tree.
void cloneRandom(struct node *tree, struct node *newTree, map<node*, node*> &mymap){
  // if the newly created tree is NULL return.
  if(newTree == NULL)
     return; 
  newTree->random = mymap[tree->random];
  cloneRandom(tree->left, newTree->left, mymap);
  cloneRandom(tree->right, tree->right, mymap);
}

// function to clone the left and the right subtree of the given tree and then clone the random pointer of the tree as well.
struct node *cloneLeftAndRightUtil(struct node *tree){
   // if tree is NULL return.
   if(tree == NULL)
     return NULL;
   // declare a map to store the nodes.
   map<node*, node*> mymap;
   // first clone the left and the right subtree.
   struct node *newTree = cloneLeftAndRight(tree, mymap);
   // now clone the random pointers of the given tree.
   cloneRandom(tree, newTree, mymap);
   // now return the cloned tree formed.
   return newTree;
}

// the time complexity of the above algorithm will be O(n), as we traverse the nodes once.
// the space complexity of the above algorthm will be O(n), due to map used.
