#include<bits/stdc++.h>
using namespace std;

#define ll long long int 



// basic
ll powRec(ll a,ll b)
{
	if(b==0)
	{
		return 1;
	}
	return a*powRec(a,b-1);
}

//optimized
ll powRecOptimized(ll a,ll b)
{
	if(b==0)
	{
		return 1;
	}
	//even 
     if(b%2==0)
     {
     	ll res = powRecOptimized(a,b/2);
     	return res*res;
     }
     //odd 2^7 = 2*(2^6) = 2*((2^3)^2)
     else
     {
     	ll res = powRecOptimized(a,(b-1)/2);
     	return a*res*res;

     }
    
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
   //  a^b -> a * (a^b-1);

		ll t;
		cin>>t;
		while(t>0)
		{
			ll a,b;
			cin>>a>>b;
			cout<<powRecOptimized(a,b)<<endl;
			t--;
		}
	return 0;

}