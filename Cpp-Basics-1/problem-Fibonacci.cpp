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

	vector<ll> v(51);
	v[1]=0;
	v[2]=1;
	for(ll i =3;i<=50;i++)
	{
		v[i]=v[i-1]+v[i-2];
	}

    cout<<v[n];
	return 0;

}