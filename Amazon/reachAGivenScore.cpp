// Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find the number of distinct combinations to
//  reach the given score.

https://practice.geeksforgeeks.org/problems/reach-a-given-score/0

int findScore(int n){
  // initialize a table to store the result.
  table[n + 1];
  // initialize all values as 0.
  memset(table, 0, sizeof(table));
  // get the first case for 0.
  table[0] = 1;
  // find the intersection for all the three pairs of 3, 5 and 10.
  for(int i = 3; i <= n; i++)
    table[i] += table[i - 3];
  for(int i = 5; i <= n; i++)
    table[i] += table[i - 5];
  for(int i = 10; i <= n; i++)
    table[i] += table[i - 10];
  
 // return the result at the last index of array, which will give the intersection where all three pairs exist.
 return table[n];
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
