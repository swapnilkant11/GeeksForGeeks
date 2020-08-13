// Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.

https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0

int findLongestLength(string str1, string str2){
   int n = str1.length();
   int m = str2.length();
   int dp[n + 1][m + 1];
   // set values to 1
   memeset(dp, 0, sizeof(dp));
   for(int i = 1; i < (n + 1); i++){
      for(int j = 1; j < (m + 1); j++){
         // check for the common character
         if(str1[i - 1] == str2[j - 1])
            dp[i][j] = 1 + d[i - 1][j - 1];
         // else get the max of up and side places
         else
	    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
   }
   return dp[n][m];
}

// the time complexity of the above algorithm is of the order O(n*m)
// the space complexiity of the above algorithm is O(n)
