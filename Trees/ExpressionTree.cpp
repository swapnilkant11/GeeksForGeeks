// Given a simple expression tree, which is also a full binary tree consisting of basic binary operators i.e., + , – ,* and / and some 
// integers, Your task is to evaluate the expression tree.

https://practice.geeksforgeeks.org/problems/expression-tree/1

// created by Swapnil Kant
// on 08-07-2020

int operators(int a, string op, int b){
  // return the evaluted expression.
  if(op == '+')
    return a + b;
  if(op == '-')
    return a - b;
  if(op == '*')
    return a * b;
  if(op == '/')
    return a / b;
}

bool isOperator(string op){
  if(op == '+' || op == '-' || op == '*' || op == '/')
    return true;
  else
    return false;
}

int evaluateExpression(struct node *root){
  // if the node is NULL return -1.
  if(root == NULL)
    return 0;
  if(isOperator(root->data))
    // traverse the leaf nodes of left and the right subtree and follow recursion to get through the nodes to evalute the expression.
    return operators(evaluateExpression(root->left), root->data, evaluateExpression(root->right));
  return stoi(root->data)
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
