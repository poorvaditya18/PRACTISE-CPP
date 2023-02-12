#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

ll fact(ll n)
{
   if(n==1 or n==0)
   {
   	return 1;
   }

   return n*fact(n-1);

}





int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	ll t;
	cin>>t;
	while(t>0)
	{
		ll n;
		cin>>n;
		cout<<fact(n)<<endl;
		t--;
	}
 
	return 0;

}