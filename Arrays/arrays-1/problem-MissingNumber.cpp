#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        int sum_n = (n*(n+1))/2; 
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
        }
        int missingNum = sum_n - sum;
        return missingNum;
    }
};


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	

		// Leetcode 268. Missing Number
	
 
	return 0;

}