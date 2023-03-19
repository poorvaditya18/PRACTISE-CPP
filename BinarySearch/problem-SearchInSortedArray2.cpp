#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>& nums, int target)
     {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid]== target) return true;

            //duplicate case 
            if((nums[low]==nums[mid])&& (nums[high]==nums[mid]))
            {
                ++low;
                --high;
            }
            else if(nums[low]<=nums[mid])
            {
                //left part 
                if((nums[low]<=target) && (target<=nums[mid]))
                {
                    high = mid -1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if((target > nums[mid]) && (target<=nums[high]))
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid -1;
                }
            }
        }
        return false;
    }


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}