// Given a string that contains ternary expressions. The expressions may be nested. You need to convert the given ternary expression to a 
// binary Tree and return the root.

// created by Swapnil Kant
// on 07-07-2020
struct node{
  char data;
  struct node *left, *right;
};

struct node *newnode(char c){
 // get the newnode from memory.
 struct node *node = (struct node*)malloc(sizeof(struct node));
 // get the data.
 node->data = c;
 // get the left and right child of the root.
 node->left = NULL;
 node->right = NULL;
 // return node.
 return node;
}

struct node *convertExpression(string str, int &index){
  // get the first character of the string.
 struct node *root = newnode(str[index]);
 if(index == str.length() - 1)
   return root;
 // increment the index by 1 to get the child nodes.
 index++;
 // now check for the '?' which defines left subtree and ':' which defines the right subtree.
 if(str[index] == '?'){
   // increment index to skip '?'.
   index++;
   // get the left subtree because of '?' expression.
   root->left = convertExpression(str, index);
   // again increment to get the right subtree.
   index++;
   root->right = convertExpression(str, index);
   // return root
   return root;
 }
 // else return 
 else
   return root;
}

struct node *createTree(string str, int index){
  // set the value of index as 0.
  int index = 0;
  return convertExpression(str, index);
}

// the time complexity of the above algorithm will be O(n) where 'n' is the length of the string.
// the space complexity of the above algorithm will be O(1).


