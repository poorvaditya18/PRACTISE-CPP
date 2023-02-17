#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int s = 0;
        int i=0;
        int n = nums.size();
        while(i<n)
        {
            if(nums[i]!=0)
            {
                swap(nums[s],nums[i]);
                i++;
                s++;
            }
            else
            {
                i++;
            }
        }
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