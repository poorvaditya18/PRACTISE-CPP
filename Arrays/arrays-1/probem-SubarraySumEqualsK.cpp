#include<bits/stdc++.h>
using namespace std;


int subarraySum(vector<int>& nums, int k) 
    {
        // will store the frequency 
        unordered_map<int,int> mpp;
        mpp.insert({0,1}); // initially {0,1}

        int sum = 0;
        int ans= 0;
        for(int i=0;i<nums.size();i++)
        {
           sum += nums[i]; //cummulative sum  till ith

            int rsum = sum - k; //check for (sum - k)
            
           //check in map 
           if(mpp.find(rsum)!=mpp.end())
           {
              ans += mpp[rsum];
           }
           mpp[sum]++;
        }
        return ans;
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
// LEETCODE : 560. Subarray Sum Equals K 

// Method 1 -> o(n3)

// method 2 -> using cummulative sum with extra sum array o(n2)

// method 3 -> using cummulative sum with constant space o(n2)

// method 4 -> uisng hashmap .... cummulative sum till ith is sum[i]
// now check whether (sum[i]-k) ->>> already appeared before or not 
// if yes then increase the frequency and if no then move forward .		


	return 0;

}