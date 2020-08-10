// Given a list of non-negative numbers and a target integer k, write a function to check if the array has a continuous subarray of size at 
// least 2 that sums up to a multiple of k, that is, sums up to n*k where n is also an integer. 

bool checkSubarraySum(vector<int> arr, int k){
  // check for empty vector.
  if(arr.size() == 0) 
    return false;
  int n = arr.size();
  // map to keep a map between the remainder of an integer with 'k', if it repeats then there exists a pair.
  map<int, int> mp;
  mp[0] = -1;
  // initialize sum as 0.
  int sum = 0;
  // now traverse the array and check for the numbers.
  for(int i = 0; i < n; i++){
     // calculate sum with each integer in array.
     sum += arr[i];
     // if 'k' is not 0.
     if(k != 0)
       // find remainder, we can also use any other method of mapping but this is efficient here to find the cycle.
       sum = sum % k;
     if(mp.find(sum) != mp.end()){
         // check for the subarray length here should be at least 2 or greater than that.
         if(i - mp[sum] > 1)
            return true;
     }
     // if no mapping found create one with unique remainder.
     else
       mp[sum] = i;
  }
  return false;
}

// the time complexity of the above algorithm is O(n), where 'n' is the size of the array.
// the space complexity of the above algorithm is O(n) for map used.
  
