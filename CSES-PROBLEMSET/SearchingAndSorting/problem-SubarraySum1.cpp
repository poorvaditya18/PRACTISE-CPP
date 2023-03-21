#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 	ll n,target;
 	ll cnt =0;
 	cin>>n>>target;
	vector<ll> arr(n);

	// input
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
 
	// o(n2)--> 
	// for(ll i=0;i<n;i++)
	// {
	// 	ll  sum =0;
	// 	for(ll j=i;j<n;j++)
	// 	{
	// 		// int sum =0;
	// 		// for(int k=i;k<=j;k++)
	// 		// {
	// 		// 	sum+= arr[k];
	// 		// }
	// 		sum += arr[j];
	// 		if(sum==target)
	// 		{
	// 			count++;
	// 			break;
	// 		}
	// 	}
	// }

	// approach 2 using hashmap --> maintaining prefix sum 

	// This method will work both for positive and negative elements.
	// If you have only positiv elements they we can use prefixSum method .

	ll sum=0;
	map<ll,ll> mpp;

	for(ll i=0;i<n;i++)
	{
		sum += arr[i];
		if(sum == target) cnt++;
		if(mpp.count(sum-target))
		{
			cnt += mpp[sum-target];
		}
		mpp[sum]++;
	}

   cout<<cnt<<endl;


	return 0;

}