// Given a string s, the task is to count number of subsequences of the form aibjck, where i >= 1, j >=1 and k >= 1.
// Note: Two subsequences are considered different if the set of array indexes picked for the 2 subsequences are different.

https://practice.geeksforgeeks.org/problems/count-subsequences-of-type-ai-bj-ck/0

int findcount(string str){
  // initialize count of each characters
  int acount = 0;
  int bcount = 0;
  int ccount = 0;
  // now traverse the string and keep counting the characters 'a', 'b' and 'c'
  for(int i = 0; i < str.length(); i++){
     if(str[i] == 'a')
	acount = (1 + 2 * acount);
     if(str[i] == 'b')
        bcount = (acount + 2 * bcount);
     if(str[i] == 'c')
        ccount = (bcount + 2 * ccount);
  }
  // now return the result
  return ccount;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
