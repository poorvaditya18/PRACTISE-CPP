#include<bits/stdc++.h>
using namespace std;

   vector<int> twoSum(vector<int>& nums, int target) 
    {

        map<int,int> mpp;

        for(int i=0;i<nums.size();i++)
        {
            int ele = target - nums[i];
            if(mpp.find(ele)!= mpp.end())
            {
                int eleIdx = mpp[ele];
                return {eleIdx,i};
            }
            mpp[nums[i]] = i;
        }

        return {-1,-1};
    }


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	


	// leetCode -> Two Sum hashmap : storing element as key and value as index
	
 
	return 0;

}