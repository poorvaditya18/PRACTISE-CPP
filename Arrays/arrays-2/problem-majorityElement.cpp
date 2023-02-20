#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) 
    {
    	// using hashmap -->
        // map<int,int> mpp;
        //  int n = nums.size();

        //   int req = floor(n/2);
        //  for(int i=0;i<nums.size();i++)
        //  {
        //     mpp[nums[i]]++;
        //  }
         
        // for(auto it:mpp)
        // {
        //     if(it.second>req)
        //     {
        //         return it.first;
        //     }
        // }
        //  return -1;

        //using MOORE's VOTING ALGORITHM -->
        int count =0;
        int element = 0;
        for(auto num:nums)
        {
        	if(count==0)
        	{
        		element = num;
        	}
        	if(element == num)
        	{
        		count++;
        	}
        	else 
        	{
        		count -= 1;
        	}
        } 
        return element;       
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	 
     
     vector<int> nums = {3,2,3};
     cout<<majorityElement(nums);


	return 0;

}