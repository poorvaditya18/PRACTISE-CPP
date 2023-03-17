#include<bits/stdc++.h>
using namespace std;

 int searchInsert(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int low = 0 ;
        int high = n-1 ;
        int idx;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(target == nums[mid])
            {
                idx = mid;
                break;
            }
            else if(target>nums[mid])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        if(low>high)
        {
            idx = low;
        }
        return idx;
    }


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	


 
	return 0;

}