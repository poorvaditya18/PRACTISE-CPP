#include<bits/stdc++.h>
using namespace std;

    int findMin(vector<int>& nums)
    {
        // check for already in sorted order 
           if(nums[0]<nums[nums.size()-1])
                return nums[0];
        
        // TIP : minimum element will lie in unsorted part 
            int start=0;
            int end=nums.size()-1;
            int ans=0;
            while(start<end)
            {
                int mid=start+(end-start)/2;
                if(nums[mid]>=nums[0])
                {
                    // left part is sorted search in right part 
                    start=mid+1;
                    ans=start;
                }
                else
                {
                    // right part sorted search in left part 
                    end=mid;
                    ans=end;
                }
            }
            return  nums[ans];
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}