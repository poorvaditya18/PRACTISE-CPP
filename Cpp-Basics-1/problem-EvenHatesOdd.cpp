#include<bits/stdc++.h>
using namespace std;

#define ll long long int 


void solve()
{
     ll n;
     cin>>n;
     vector<ll> v(n);
     	ll odd_cnt=0;
		ll even_cnt=0;

		for(auto &i:v)
		{
			cin>>i;
			if(i%2!=0)
			{
				odd_cnt++;
			}
			else
			{
				even_cnt++;
			}
		}
		if(n%2!=0)
		{
			cout<<-1<<'\n';
			return ;
		}
		cout<<llabs(even_cnt-odd_cnt)/2<<'\n';
}





int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
    
    ll t=1;
    cin>>t; //tc
    while(t--)
    {
    	solve();
     
    }
    
	
   return 0;
}