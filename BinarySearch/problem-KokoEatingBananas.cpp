#include<bits/stdc++.h>
using namespace std;


    long long int TotalHours(vector<int>&piles,long long int assumedK)
    {
        long long int totathrs = 0;
        for(int i=0;i<piles.size();i++)
        {
            totathrs += ceil(piles[i]/(double)assumedK);
        }
        return totathrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) 
    {
        long long int low = 1;
        long long int high = *(max_element(piles.begin(),piles.end()));
        int ans = -1;
        while(low<=high)
        {
            long long int mid = low + (high-low)/2;
            long long int totalHours = TotalHours(piles,mid);

            if(totalHours<=h)
            {
                ans = mid;
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}