#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) 
    {
        int xorsum=0; //variable to calculate xor and store unique number
            for(int i=0;i<nums.size();i++)
                {
                xorsum=xorsum^nums[i];
                }
        return xorsum;
    }


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	// Leetcode - 136. Single Number
 
	return 0;

}