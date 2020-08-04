// You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node.
// Pointer/ reference to head node is not given. 
// Note: No head reference is given to you.

https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1

struct node{
  int data;
  struct node *next;
}

void deleteNode(struct node* node){
  // if the node is NULL return.
  if(node == NULL)
    return;
  else{
    // if the next node of the current node is NULL return, because we are taking that the given node will not be the last node.
    if(node->nect == NULL)
       return;
    // copy the reference of next node to a temporary node.
    struct node *temp = node->next;
    // copy the data of the next node of current node to the existing node to be deleted.
    node->data = node->next->data;
    // now set the pointer of the current node to next of next;
    node->next = node->next->next;
    free(temp);
  }
}

// the time complexity of the above algorithm is O(1).
// the space complexity of the above algorithm is O(1).
