#include<bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	ll n,m,k;
	cin>>n>>m>>k;

	vector<ll> a(n);
	vector<ll>b(m);

	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll j=0;j<m;j++)
	{
		cin>>b[j];
	}

	// using Two Pointer technique ->

	//1. sort both
	sort(a.begin(),a.end());

	sort(b.begin(),b.end());

	ll i=0;
	ll matches =0;
	ll j=0;
	while(i<n)
	{
		if(j<m and b[j]< a[i]-k)
		{
			// if current apartment size less than minimum applicant requirement then move frwd
 			j++;
		}
		else if(abs(b[j]-a[i])<=k)
		{
			// if current appartment size in range then allot 
			// check -> b[j] <= a[i] + k 
			matches++;
			i++;
			j++;

		}
		else
		{
			// if current appartment size grter than maximum applicant requirement then check for next applicant
			i++;
		}
	}
    cout<<matches<<endl;
	return 0;

}