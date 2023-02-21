#include<bits/stdc++.h>
using namespace std;

    long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
         long long int sum=0, res =INT_MIN;
         
        for(int i =0; i<N-1; i++){
            sum = arr[i]+arr[i+1];
            res = max(res, sum);
        }
        return res;
        
    }
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
   // gfg -> Max Sum in sub arrays 
		// idea -> subarray with size = 2 maximum sum
 
	return 0;

}