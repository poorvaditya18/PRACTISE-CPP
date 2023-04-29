#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:

    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int> st;
       int j=0; 
       int n = pushed.size();
       for(auto ele:pushed)
       {
           st.push(ele);
           // check stack is empty or not , j < n and 
           // if stack top is equal to popped then pop and increase j
           // finally if j==n means all it gives the right sequence 
           while(!st.empty() && j<n && st.top()==popped[j])
           {
               st.pop();
               j++;
           }
       }
        return j==n;
    }
};