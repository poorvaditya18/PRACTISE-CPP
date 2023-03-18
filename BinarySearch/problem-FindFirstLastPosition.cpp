#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   
   // check For First Position
   int checkFirstPosition(vector<int>&nums,int target)
   {
        int res = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]==target)
            {
                res = mid;
                high = mid -1;
            }
            else if (target > nums[mid])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return res;
   }
    
    int checkLastPosition(vector<int>&nums,int target)
    {
        int res = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[mid]==target)
            {
                res = mid;
                low = mid + 1;
            }
            else if (target > nums[mid])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return res;
    }

    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> ans;
        
       int first = checkFirstPosition(nums,target);
       int last = checkLastPosition(nums,target);
       ans.push_back(first);
       ans.push_back(last);
       return ans;

    }
};
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}