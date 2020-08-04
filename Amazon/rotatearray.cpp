// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0

// find the greatest common factor.
int findgcd(int a, int b){
  if(b == 0)
    return a;
  else 
    return findgcd(b, a % b);
}

// now rotate
void rotatearray(int arr[], int d){
  int temp, j;
  // rotate the array till the given condition.
  for(int i = 0; i < findgcd(d, n); i++){
    temp = arr[i];
    j = i;
    // perform rotation till the size of the array.
    while(1){
      int k = j + d;
      if(k >= n)
	k = n - k;
      // break when we reach the end of string.
      if(k == i)
	break;
      arr[k] = arr[j];
      j = k;
    }
    arr[j] = temp;
  }
}

// the time compelxity of the above algorithm is o(n) we traverse the array only once!!.
// the space complexity of the above algorithm is O(1).
