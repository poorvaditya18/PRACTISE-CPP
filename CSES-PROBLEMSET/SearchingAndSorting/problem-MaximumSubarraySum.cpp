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
	cin>>n;
	vector<ll> arr(n);

	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}



	// kadane's algo -->
	ll currSum = 0;
	ll maxi = arr[0];
	for(ll i=0;i<n;i++)
	{
		currSum += arr[i];
		maxi = max(currSum,maxi);
		if(currSum<0)
		{
			currSum = 0;
		}

	}
 
  	cout<<maxi<<endl;
	return 0;

}