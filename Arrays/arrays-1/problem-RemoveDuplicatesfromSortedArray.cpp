#include<bits/stdc++.h>
using namespace std;



// Leetcode -> Remove Duplicates From Sorted Array


 int removeDuplicates(vector<int>& nums) 
 {
       
        int indexStart = 1;
        for(int i=1;i<nums.size();i++)
        {
            int k = i;
            if(nums[i]!=nums[i-1])
            {
                nums[indexStart] = nums[k];
                indexStart++;
            }
        }
        return indexStart;
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	 
	return 0;

}