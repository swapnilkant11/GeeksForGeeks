// Given a sequence A of size N, find the length of the longest increasing subsequence from a given sequence .
// The longest increasing subsequence means to find a subsequence of a given sequence in which the subsequence's elements are in sorted 
// order, lowest to highest, and in which the subsequence is as long as possible. This subsequence is not necessarily contiguous, or unique.

// Note: Duplicate numbers are not counted as increasing subsequence.

https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence/0/

int returnlengthofincreasing(int arr[], int n){
   // store the result.
   int dp[n];
   // initialize it to 1
   memset(dp, 1, sizeof(dp));
   // traverse the next elements of the array.
   for(int i = 1; i < n; i++){
      for(int j = 0; j < i; j++){
          // if the current index element is greater than one before and also the count in current index is less than previous, then it's 
          // increasing subsequence.
          if(arr[i] > arr[j] && arr[i] < arr[j] + 1)
             dp[i] = dp[j] + 1;
      }
   }
   return *max_element(dp, dp + n);
}

// the time complexity of the above algorithm is of the order n square.
// the space complexity of the above algorithm is O(n), due to array used.
