#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) 
    {
         set<int> hashset;
        // inserting element in hashset
        for(int i=0;i<nums.size();i++)
        {
            hashset.insert(nums[i]);
        }
        
        int longestCount =0;
        
        for(auto num:nums)
        {   
            // element is not present 
            if(!hashset.count(num-1))
            {
                int currEle = num;
                int currStreak = 1;

                // check for the next number 
                while(hashset.count(currEle+1))
                {
                    currStreak ++;
                    currEle++;
                }

                longestCount = max(longestCount,currStreak);   
            }
        }
         
          
    
        return longestCount ;
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
		// method 1 : sort the array and count the longest sequence that is possible 


		// method 2 : using Hash Set --> inserting elements in set and then checking for elements less than currElement exists or not , if not then checking for the elements grter than the currEle
 
	return 0;

}