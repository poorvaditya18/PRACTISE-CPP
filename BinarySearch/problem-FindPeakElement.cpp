#include<bits/stdc++.h>
using namespace std;

// iteratively -> o(log n)
int findPeakElement(vector<int>& nums) 
    {
        
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<high)
        {
            int mid = (low + high)/2;
            if(nums[mid]>nums[mid+1])
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
     }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}