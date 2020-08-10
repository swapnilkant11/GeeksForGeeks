// A message containing letters from A-Z is being encoded to numbers using the following mapping:
// 'A' -> 1
// 'B' -> 2
// ...
// 'Z' -> 26
// Given a non-empty string containing only digits, determine the total number of ways to decode it.

int countNumberOfWaysToDecode(string str){
   // get the length.
   int n = str.length();
   int dp[n + 1];
   // set the default value to 0.
   memset(dp, 0, sizeof(dp));
   // initialize the base values.
   dp[0] = 1;
   dp[1] = 1;
   for(int i = 2; i < (n + 1); i++){
      // searching for the just one character before.
      if(str[i - 1] >= '1')
        dp[i] += dp[i - 1];
      // searching for two characters before along with a case of taking two at a time.
      if(str[i - 2] >= '1' || (str[i - 2] == '2' && str[i - 1] < '7'))
        dp[i] += dp[i - 2];
   }
   return dp[n];
}

// the time complexity of the above algorithm is O(n), 'n' is the length of string.
// the space complexity of the above algorithm is O(n), due to array used.
