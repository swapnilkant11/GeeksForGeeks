// Given a binary array A[] of size N. The task is to arrange the array in increasing order.
// Note: The binary array contains only 0  and 1.

https://practice.geeksforgeeks.org/problems/binary-array-sorting5355/1

vector<int> BinaryArraySorting(vector<int> v){
   // get the size
   int n = v.size();
   // count 0s
   int count0 = 0;
   // count 1
   int count1 = 0;
   for(int i = 0 ; i < n; i++){
      if(v[i] == 0)
	count0++;
      else
        count1++;
   }
   // now put the numbers to the vector
   for(int i = 0; i < count0;; i++)
      v[i] = 0;
   for(int j = i; j < count1; j++)
      v[i] = 1;
   return v;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
