// Given a string str, find length of the longest repeating subseequence such that the two subsequence don’t have same string character at 
// same position, i.e., any i’th character in the two subsequences shouldn’t have the same index in the original string.

https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence/0

int returnLength(string str){
  // get the length.
  int n = str.length();
  // store the result.
  int dp[n + 1][n + 1];
  // initialize it as 0.
  memset(dp, 0, sizeof(dp));
  // now check for the characters in the given string.
  for(int i = 1; i < (n + 1); i++){
     for(int j = 1; j < (n + 1); j++){
         if(str[i - 1] == str[j - 1] && i != j)
           dp[i][j] = 1 + dp[i - 1][j - 1];
         else
	   dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
     }
  }
  return dp[n][n];
}

// the time complexity of the above algorithm is of the order n square.
// the space complexity of the above algorithm is O(n), due to extra space used.
