#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> st;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k = nums.size()-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if (sum<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }

            }
        }
        for(auto triplets : st)
          {  ans.push_back(triplets); }

        return ans;    
    }
};
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

	// 3sum --> sort then mark low(i) j = i+1 and k as high 
 
	return 0;

}