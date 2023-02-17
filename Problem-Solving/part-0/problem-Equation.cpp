#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

bool checkPrime(ll j)
{
	for(ll i=2;i*i<j;i++)
	{
		if(j%i==0)
		{
			return false;
		}
	}
	return true;
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
    ll t = 1e9;
 	ll n;
 	cin>>n;

 	for(ll i=2;i<t;i++)
 	{
 		ll j = i - n;
 		// check whether is composite or not 
 		if(!checkPrime(j) and !checkPrime(i))
 		{
 			cout<<i<<" "<<j<<endl;
 			break;
 		}
 	}


	return 0;

}