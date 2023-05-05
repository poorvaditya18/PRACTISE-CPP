#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   
    int maxVowels(string s, int k) 
    {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int n = s.length();
        if(n<k) return -1;

        int maxVowel = 0;
        for(int i=0;i<k;i++)
        {
            // count -> returns 1: if element is present else 0
            maxVowel += vowels.count(s[i]);
        }

        int currVowel = maxVowel;
        for(int i=k;i<n;i++)
        {
            //sliding window logic 
            currVowel += vowels.count(s[i]) - vowels.count(s[i-k]);
            maxVowel = max(maxVowel,currVowel);
        }
        return maxVowel;
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