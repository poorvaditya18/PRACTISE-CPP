#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

       vector<int> ans; // this will store the maximun 
       int i=0;
       int j=0;
       list<int> li;
   
       while(j<nums.size())
       {
           // calculation -> remove elements smaller than current element
           while(li.size()>0 and li.back()<nums[j])
           {
               li.pop_back();
           }

           // push current element in list; 
           li.push_back(nums[j]);

           if(j-i+1<k) j++;

           else if(j-i+1==k)
           {
               //window size equal 
               int ele = li.front();
               ans.push_back(ele);

               if(li.front()==nums[i])
               {
                   li.pop_front();
               }

               //slide 
               i++;
               j++;
           }
       }
       return ans;
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