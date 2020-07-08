// Given a Binary Tree of size N, your task is to complete the function sumBt(), that should return the sum of all the nodes of the given 
// binary tree.

https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1

// created by Swapnil Kant
// on 08-07-2020

long int sumBT(Node* root)
{
    if(root == NULL)
       return 0;
    return root->key + sumBT(root->left) + sumBT(root->right);
}

// time complexity for the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
