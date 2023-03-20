#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) 
    {

    	// intuition --> check where will single element lie .
        int low = 0;
        int high = nums.size()-1;

        while(low<high)
        {
            int mid = (low+high)/2;
            if(mid%2 ==1)
            {
                mid--;
            }
            if(nums[mid]!=nums[mid+1])
            {
                high = mid;
            }
            else
            {
                low = mid+2;
            }
        }
        return nums[low];

    }


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}