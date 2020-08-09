// A frog jumps either 1, 2 or 3 steps to go to top. In how many ways can it reach the top.

https://practice.geeksforgeeks.org/problems/count-number-of-hops/0

int counthops(int n){
  // store the result for memoization.
  int steps[n + 1];
  // base cases.
  steps[0] = 1;
  steps[1] = 1;
  steps[2] = 2; 
  // now traverse the array and store the result.
  for(int i = 3; i < (n + 1); i++)
     steps[i] = steps[i - 1] + steps[i - 2] + steps[i - 3];
  return steps[n];
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
