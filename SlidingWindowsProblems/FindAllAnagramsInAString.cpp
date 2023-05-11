#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        unordered_map<char,int> mp;
         // add the pattern elements to the map
         for(auto str:p)
         {
             mp[str]++;
         }
         vector<int> ansIdx;
         int k = p.size(); /// window size 
         int i=0;
         int j=0;
         int count = mp.size(); // count of distinct elements 
         while(j<s.size())
         {
             
             // check whether s[j] is present in map or not 
             if(mp.find(s[j]) != mp.end())
             {
                 // if present 
                 mp[s[j]]-- ; // decrease the element count

                 if(mp[s[j]] == 0) count--; // decrease the distinct count 
             }
             // increase the window size
             if(j-i+1<k) j++;
            
             else if(j-i+1==k)
             {
                // check whether count ==0 then valid anagram  
                if(count==0)
                {
                    ansIdx.push_back(i);
                }
                // slide the window 
                // before sliding check whether s[i] is present in map or not 
                if(mp.find(s[i]) != mp.end())
                {
                    mp[s[i]]++;
                    if(mp[s[i]]==1)
                    {
                        // increase the distinct count 
                        count++;
                    }
                }
                // now slide the window 
                i++;
                j++;
             }
         }
         return ansIdx;    
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