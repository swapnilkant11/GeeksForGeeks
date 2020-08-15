// Given a Binary Tree having random pointers clone the Binary Tree. The task is to complete the function cloneTree which take one argument 
// the root of the tree to be copied and should return the root of the cloned tree.

https://practice.geeksforgeeks.org/problems/clone-a-binary-tree/1

struct node *newnode(int data){
  struct node *node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node>right = NULL;
  return node;
}

// clone the left and the right subtree
struct node *cloneLeftandRightTree(struct node *tree, map<struct node*, struct node*> &mp){
   if(tree == NULL)
      return NULL;
   struct node *cloneTree = newnode(tree->data);
   mp[cloneTree] = tree;
   // now map the tree nodes with the 
   cloneTree->left = cloneLeftandRightTree(tree->left, mp);
   cloneTree->right = cloneLeftandRightTree(tree->right, mp);
   return cloneTree;
}

// clone the random pointers.
void cloneRandom(struct node *tree, struct node *temp, map<struct node*, struct node*>&mp){
   if(temp == NULL)111
     return NULL;
   // copy the reference from the original tree
   temp->random = mp[tree->random];
   // do for left and the right subtree
   cloneRandom(tree->left, temp->left, mp);
   cloneRandom(tree->right, temp->right, mp);
}

// function to clone the tree
struct node *cloneTree(struct node *tree){
  // declare map
  map<struct node*, struct node*> mp;
  if(tree == NULL) 
    return NULL;
  struct node *root = cloneLeftandRightTree(tree, mp);
  cloneRandom(tree, root, mp);
  return root;
}

// the time complexity of the above algorithm is O(n)
// the space complexity of th above algorithm is O(n)
