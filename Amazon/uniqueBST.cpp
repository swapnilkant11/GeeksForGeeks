// Given an integer N, how many structurally unique binary search trees are there that store values 1...N?

https://practice.geeksforgeeks.org/problems/unique-bsts/0

int countBST(int n){
  // store the result 
  int sol[n + 1];
  // initialize it to 0
  memset(sol, 0, sizeof(sol));
  // base cases
  sol[0] = 1;
  sol[1] = 1;
  // keep mentaining a count of BST's for 'ith' root where the left child will be 0 to i - 1 and right child will be i + 1 to n.
  for(int i = 2; i < (n + 1); i++){
     for(int j = 1; j <= i; j++)
        sol[i] += (sol[i - j] * sol[j - 1]);
  }
  return sol[n];
}

// the time complexity of the above solution will be of the order of n square.
// the space complexity of the above solution will be of the order of O(n).
