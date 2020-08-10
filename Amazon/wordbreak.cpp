// Given an input string and a dictionary of words, find out if the input string can be segmented into a space-separated sequence of 
// dictionary words. See following examples for more details.

// Consider the following dictionary
// { i, like, sam, sung, samsung, mobile, ice,
//  cream, icecream, man, go, mango}

// Input:  ilike
// Output: Yes
// The string can be segmented as "i like".

// Input:  ilikesamsung
// Output: Yes
// The string can be segmented as "i like samsung" or "i like sam sung".

https://practice.geeksforgeeks.org/problems/word-break/0

bool findWordMatch(string str, vector<string> v){
   // get the length.
   int n = str.length();
   bool sol[n + 1];
   // set all values to false.
   memset(sol, false, sizeof(sol));
   // define first value as true.
   sol[0] = true;
   for(int i = 0; i < n; i++){
      // search for words in v vector.
      for(auto x: v){
         // get the length of current word in the dictionary.
         int len = x.length();
         // if current place in sol array is true, it means one word has been checked and move to the next one.
         if(sol[i] == true)
            if(str.substr(i, len) == x)
               sol[i + len] = true;
      }
   }
   return sol[n];
}

// the time complexity of the above algorithm is O(n*m), 'n' and 'm' are the sizes of string and vector respectively.
// the space complexity of the above algorithm is O(n).
