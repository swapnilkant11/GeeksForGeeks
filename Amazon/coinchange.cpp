// Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins. The order of coins doesn’t matter. For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4. For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and 
// {5,5}. So the output should be 5.

https://practice.geeksforgeeks.org/problems/coin-change/0

int findchange(int arr[], int coin, int n){
   // get an array to store result for memoization.
   int table[n + 1][coin + 1];
   // now fill the table with 1 in the first col because for 0 change to make there is only 1 way to get the change.
   for(int i = 0; i < (n + 1); i++)
     table[i][0] = 1;
   // now fill the table with 0 in the first row because for 0 coin there are 0 ways to make change for coins given.
   for(int i = 1; i < (coin + 1); i++)
     table[0][i] = 0;
   // now fill the table from bottom up manner.
   for(int i = 1; i < (n + 1); i++){
     for(int j = 1; j < (coin + 1); j++){
        if(j >= arr[i - 1])
           table[i][j] = table[i - 1][j] + table[i][j - arr[i - 1]];
        else
	   table[i][j] = table[i - 1][j];
     }
   }
   return table[n][coin];
}

// the time complexity of the above algorithm is of the order n square.
// the space complexity of the above algorithm is O(n). 
