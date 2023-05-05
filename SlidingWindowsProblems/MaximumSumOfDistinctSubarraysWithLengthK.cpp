#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        map<int,int> mpp;
       int n = nums.size();
       long long sum =0;
       long long mx = 0;
       int i=0;
       int j=0;
       while(j<n)
       {
           mpp[nums[j]]++;
           sum = sum + nums[j];
           if(j-i+1 < k) j++;
           else if(j-i+1 == k)
           {
               //check whether all the elements are unique or not 
               if(mpp.size()==k) 
               {
                   mx = max(mx,sum);
               }
            
               // decrease the count of nums[i];
               mpp[nums[i]]--;
               if(mpp[nums[i]]==0)
               {
                   mpp.erase(nums[i]);
               }
               
               // remove from the sum 
               sum = sum - nums[i];
               i++;
               j++;
           }
       }
       return mx;
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