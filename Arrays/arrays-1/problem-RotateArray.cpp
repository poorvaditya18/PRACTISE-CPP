#include<bits/stdc++.h>
using namespace std;

	void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
       
        vector<int> temp(n);
       for(int i=0;i<n;i++)
       {
            
            temp[i] = nums[abs(n- k +i)%n];
       }
       for(int i=0;i<temp.size();i++)
       {
           nums[i] = temp[i];
       }
    }



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

// LEETCODE -> 189. Rotate Array
 
	return 0;

}