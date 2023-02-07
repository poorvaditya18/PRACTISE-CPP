#include<bits/stdc++.h>
using namespace std;

#define ll long long int 



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
    ll mx = -1;

	ll t;
	cin>>t;

	while(t>0)
	{
		ll n;
		cin>>n;
		if(n>mx)
		{
			mx=n;
		}
		t--;
	}
    
    cout<<mx<<endl;

	return 0;

}