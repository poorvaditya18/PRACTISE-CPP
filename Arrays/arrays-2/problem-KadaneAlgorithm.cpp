#include<bits/stdc++.h>
using namespace std;


    int maxSubArray(vector<int>& nums) 
    {
        int currSum = 0;
        int maximum = nums[0];  
        for(int i=0;i<nums.size();i++)
        {
            currSum += nums[i];
            maximum = max(currSum,maximum);
            if(currSum<0)
            {
                currSum = 0;
            }
        }
        return maximum;
    }


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

	// using Three for loops i,j and k from i to j Time O(n3)

    // using - two loop i and j , maintaining currSum , maxSum O(n2)

	// using - Kadane's Algorithm 
       
     
 
	return 0;

}