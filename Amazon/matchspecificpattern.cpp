// Given a dictionary of words and a pattern. Every character in the pattern is uniquely mapped to a character in the dictionary. 
// Find all such words in the dictionary that match the given pattern. 

https://practice.geeksforgeeks.org/problems/match-specific-pattern/1

string returnmappedpattern(string pattern){
  // take a map to store the mapping of characters.
  map<string, int> mp;
  string res = "";
  // counter to map the count of characters.
  int counter = 0;
  // now traverse through the pattern and map the characters to counter and store to return the counter pattern.
  for(auto ptr: pattern){
    mp[ptr] = counter++;
    res += to_string(mp[ptr]);
  }
  return res;
}

vector<string> findsuccessfulpattern(vector<string> dict, string pattern){
  int len = pattern.length();
  // vector to store the final result.
  vector<string> ans;
  string mappedstring = returnmappedpattern(pattern);
  // traverse the dictionary given.
  for(auto ptr: dict){
    // check for condition that length is same and pattern is same.
    if(ptr.length() == n && mappedstring == returnmappedpattern(ptr))
       ans.push_back(ptr);
  }
  return ans
}

// the time complexity of the above algorithm is O(n*k), length of word 'n' and length of the pattern.
// the space complexity of the above algorithm is O(n), map.
