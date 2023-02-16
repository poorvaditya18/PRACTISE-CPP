#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
     
        // if array has to be rotated then atleast one element should be greater than next element.
        // i==0 arr[0]--> 3,  arr[1%5]= 4 
        // i=1  arr[i] --> 4, arr[2%5] = 5
        // i=2 arr[i] --> 5 , arr[3%5] = 1 , count = 1;
        
        int count =0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>nums[(i+1)%n])
            {
                count++;
            }
        }
        return (count<=1);
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

// Leetcode -> 1752. Check if Array Is Sorted and Rotated
 
	return 0;

}