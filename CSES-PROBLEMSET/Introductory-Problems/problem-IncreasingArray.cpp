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

	vector<ll> v(n);

	for(auto &j:v)
	{
		cin>>j;
	} 

    ll moves = 0;

	for(ll i=1;i<n;i++)
	{
		
		
			moves += max(0ll,v[i-1] - v[i]);
			v[i] = max(v[i],v[i-1]);
		
	}
    
    cout<<moves<<'\n';

 
	return 0;

}