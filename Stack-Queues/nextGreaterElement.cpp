#include<bits/stdc++.h>
using namespace std;

// next greater element --> time complexity : o(2n + 2n) = O(n) , space : o(n)
vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> nge(n,-1);
        stack<int> st;

        for(int i=2*n-1;i>=0;i--)
        {
            //remove all the smaller elements 
            while(!st.empty() and st.top()<= nums[i%n])
            {
              st.pop();
            }
            if(i<n)
            {
            	// if the stack is not empty then top most is the nge 
                if(st.empty()==false)
                {
                    nge[i] = st.top();
                }
                else
                {
                	// else mark that index as -1
                    nge[i]= -1;
                }
            }
            st.push(nums[i%n]); //push the current element
        }
       return nge;
    }
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}