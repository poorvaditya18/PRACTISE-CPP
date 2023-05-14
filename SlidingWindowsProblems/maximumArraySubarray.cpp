#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int i=0;
        int j=0;
        double maxAvg = INT_MIN;
        double avg = 0;
        double sum =0 ;
        while(j<nums.size())
        {
            //calculation 
            sum = sum + nums[j];
            avg = sum / (j-i+1);
            // increase the window size 
            if(j-i+1<k) {
                j++;
            }
            
            // equal to window
            else if(j-i+1==k)
            {
                // obtain ans from calculation 
                maxAvg = max(avg,maxAvg);
                 

                sum = sum - nums[i];
                // slide the window  i++,j++
                i++;
                j++;
            }
        }
        return maxAvg;
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