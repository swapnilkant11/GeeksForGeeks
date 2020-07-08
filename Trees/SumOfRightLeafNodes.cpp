// Given a Binary Tree of size N, your task is to complete the function rightLeafSum(), that should return the sum of all the leaf nodes 
// that are right child of their parent of the given binary tree.

https://practice.geeksforgeeks.org/problems/sum-of-right-leaf-nodes/1

// created by Swapnil Kant
// on 08-07-2020

int rightLeafSum(Node* root)
{
    //int sum = 0;
     //Code here
     if(root == NULL)
        return 0;
     if(root->right != NULL){
         if(root->right->left == NULL && root->right->right == NULL)
            return root->right->data;
     }
     return rightLeafSum(root->left) + rightLeafSum(root->right);
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
