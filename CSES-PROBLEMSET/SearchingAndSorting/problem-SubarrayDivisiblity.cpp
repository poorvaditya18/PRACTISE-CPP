#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	ll n;
	ll ans =0;
 	cin>>n;
	vector<ll> arr(n);

	// input
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
 
	// Time : o(n2)--> 
	// for(ll i=0;i<n;i++)
	// {
	// 	ll  sum =0;
	// 	for(ll j=i;j<n;j++)
	// 	{
	// 		sum += arr[j];
	// 		if(sum%n==0)
	// 		{
	// 			++cnt;
	// 			break;
	// 		}
	// 	}
	// }

// using hashmap --> 
	map<ll,ll> mpp;
	ll sum =0;
	ll rem =0;
	mpp.insert({0,1});

	for(ll i=0;i<n;i++)
	{
		sum += arr[i];
		rem = sum % n;
		if(rem<0)
		{
			rem+=n;
		}

		if(mpp.find(rem)!=mpp.end())
		{
			ans += mpp[rem]; // add previous freq 
			mpp[rem]+= 1; // increase its frequency 
		}
		else
		{
			mpp[rem]++;
		}
	}

	cout<<ans<<endl;

	return 0;

}