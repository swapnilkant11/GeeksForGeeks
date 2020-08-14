// Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements 
// in the same relative order.

https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

queue <ll> reverseFirstQElements(queue<ll> q, int k){
   // get a stack to carry out this operation.
   stack<ll> s;
   // get out the first 'k' elements.
   for(int i = 0; i < k; i++){
      int frontelement = q.front();
      s.push(frontelement);
      q.pop();
   }
   // now push the element of stack into the queue back.
   while(!s.empty()){
      int element = s.top();
      q.push(element);
      s.pop();
   }
   // return the final output.
   return q;
}

// the time complexity of the above algorithm is O(k).
// the space complexity of the above algorithm is O(n).
