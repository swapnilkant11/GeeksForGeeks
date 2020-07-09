// Given a binary tree of size N, you have to count number of nodes in it.

https://practice.geeksforgeeks.org/problems/size-of-binary-tree/1

// created by Swapnil Kant
// on 09-07-2020

int countNodes(Node* node, int &count){
    // if node is NULL return total count.
    if(node == NULL)
    return count;
    // doing inorder traversal recursively.
    countNodes(node->left, count);
    count++;
    countNodes(node->right, count);
}
int getSize(Node* node){
   // Your code here
   int count = 0;
   return countNodes(node, count);
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
