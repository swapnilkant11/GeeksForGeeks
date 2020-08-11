// Stickler the thief wants to loot money from a society having n houses in a single line. He is a weird person and follows a certain rule 
// when looting the houses. According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the 
// amount he loots. The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. He asks
//  for your help to find the maximum money he can get if he strictly follows the rule. Each house has a[i] amount of money present in it.

https://practice.geeksforgeeks.org/problems/stickler-theif/0

int returncostofstolenhouse(int arr[], int n){
   if(n == 0)
     return 0;
   // if size of array is 1
   int val1 = arr[0];
   if(n == 1)
     return val1;
   // if size of array is 2
   int val2 = max(arr[0], arr[1]);
   if(n == 2)
     return val2;
   int sum = 0;
   // if size is greater than 2
   for(int i = 3; i < n; i++){
      sum = max(arr[i] + val1, val2);
      val1 = val2;
      val2 = sum;
   }
   return sum;
}

// the time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
